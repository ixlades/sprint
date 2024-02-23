#include "read_file.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        mx_printerr("usage: ./read_file [file_path]\n");
        return 1;
    }
    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);

    if (fd == -1) {
        mx_printerr("error\n");
        return 1;
    }
    char buffer[BUFFER_SIZE];
    int bytesRead;

    while ((bytesRead = read(fd, buffer, sizeof(buffer))) > 0) {
        if (write(STDOUT_FILENO, buffer, bytesRead) != bytesRead) {
            mx_printerr("error\n");
            close(fd);
            return 1;
        }
    }

    if (bytesRead == -1) {
        mx_printerr("error\n");
        close(fd);
        return 1;
    }
    close(fd);

    return 0;
}

