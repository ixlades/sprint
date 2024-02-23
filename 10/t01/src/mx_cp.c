#include "mx_cp.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        mx_printerr("usage: ./mx_cp [source_file] [destination_file]\n");
        return 1;
    }
    const char *sourceFile = argv[1];
    const char *destinationFile = argv[2];

    int srcFd = open(sourceFile, O_RDONLY);

    if (srcFd == -1) {
        mx_printerr("mx_cp: src_file: No such file or directory\n");
        return 1;
    }

    // Try to open destination file with O_CREAT and O_EXCL, which creates the file if it does not exist
    int destFd = open(destinationFile, O_WRONLY | O_CREAT | O_EXCL, 0666);

    if (destFd == -1) {
        if (errno == EEXIST) {
            close(srcFd);
            return 0;
        }
    }
    char buffer[BUFFER_SIZE];
    long bytesRead, bytesWritten;

    while ((bytesRead = read(srcFd, buffer, sizeof(buffer))) > 0) {
        bytesWritten = write(destFd, buffer, bytesRead);

        if (bytesWritten == -1) {
            close(srcFd);
            close(destFd);
            return 1;
        }
    }
    close(srcFd);
    close(destFd);

    return 0;
}


