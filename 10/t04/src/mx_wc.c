#include "wc.h"

void wc(const char *filename, int *total_lines, int *total_words, int *total_bytes) {
    int fd = open(filename, O_RDONLY);

    if (fd == -1) {
        const char *error = strerror(errno);
        mx_printerr("mx_wc: ");
        mx_printerr(filename);
        mx_printerr(": ");
        mx_printerr(error);
        mx_printerr("\n");
        exit(EXIT_FAILURE);
    }

    char buffer[4096];
    ssize_t read_bytes;
    int in_word = 0;
    int lines = 0, words = 0, bytes = 0;

    while ((read_bytes = read(fd, buffer, sizeof(buffer))) > 0) {
        for (ssize_t i = 0; i < read_bytes; ++i) {
            bytes++;

            if (buffer[i] == '\n') {
                lines++;
                *total_lines += 1;
                in_word = 0;
            } else if (mx_isspace(buffer[i])) {
                in_word = 0;
            } else if (!in_word) {
                words++;
                *total_words += 1;
                in_word = 1;
            }
        }
    }

    if (read_bytes == -1) {
        mx_printerr("mx_wc: read: ");
        mx_printerr(strerror(errno));
        mx_printerr("\n");
        exit(EXIT_FAILURE);
    }
    *total_bytes += bytes;

    print_output(lines, words, bytes, filename);
    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        mx_printerr("Usage: mx_wc file1 [file2 ...]\n");
    }

    int total_lines = 0, total_words = 0, total_bytes = 0;

    for (int i = 1; i < argc; ++i) {
        wc(argv[i], &total_lines, &total_words, &total_bytes);
    }

    if (argc > 2) {
        print_output(total_lines, total_words, total_bytes, "total");
    }

    return 0;
}

