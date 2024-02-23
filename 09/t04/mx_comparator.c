#include <stdio.h>
#include <stdbool.h>

int mx_comparator(const int *arr, int size, int x, bool(*compare)(int, int)) {
    if (size > 0 && arr != NULL) {
        int counter = 0;

        while (counter < size) {
            if (compare(arr[counter], x)) {
                return counter;
            }
            ++counter;
        }
    }
    return -1;
}

