#include "mx_cat.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        mx_printerr("hello\n");
        write(1, "hello\n",6);
        return 1;
    }

    const char *sourceFile = argv[1];
    int srcFd = open(sourceFile, O_RDONLY);


    if (srcFd == -1) {
        mx_printerr("mx_cat: ");
        mx_printerr(sourceFile);
        mx_printerr(": No such file or directory\n");
        return 1;
    }
    char buffer[BUFFER_SIZE];
    long bytesRead;

    while ((bytesRead = read(srcFd, buffer, sizeof(buffer))) > 0) {
        long bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
        if (bytesWritten == -1) {
            mx_printerr(strerror(errno));
            close(srcFd);
            return 1;
        }
    }
    if (bytesRead == -1) {
        mx_printerr(strerror(errno));
        close(srcFd);
        return 1;
    }
    close(srcFd);

    return 0;
}

