#include "file_to_str.h"

char *mx_file_to_str(const char *filename) {
    int fd = open(filename, O_RDONLY);
    
    if (fd == -1) {
        errno = EIO;
        return NULL;
    }
    char temp;
    int read_result;
    int file_size = 0;
    
    while ((read_result = read(fd, &temp, 1)) > 0) {
        ++file_size;
    }

    if (read_result == -1) {
        close(fd);
        errno = EIO;
        return NULL;
    }
    char *file_content = mx_strnew(file_size);
    
    if (file_content == NULL) {
        close(fd);
        errno = ENOMEM;
        return NULL;
    }
    // Read the file content into allocated memory
    close(fd);  // Close and reopen to reset the file position
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        free(file_content);
        errno = EIO;
        return NULL;
    }
    int i = 0;
    
    while (read(fd, &temp, 1) > 0) {
        file_content[i] = temp;
        ++i;
    }
    close(fd);
    file_content[file_size] = '\0';

    return file_content;
}

