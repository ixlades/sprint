#include <string.h>
#include <unistd.h>

void mx_write_knock_knock(void) {
    char string[] = "Follow the white rabbit.\nKnock, knock, Neo.\n";
    int length = strlen(string);

    write(1, string, length);
}

