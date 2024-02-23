#include "duplicate.h"

int *mx_copy_int_arr(const int *src, int size) {
    if (src != NULL && size > 0) {
        int *new_arr = (int *)malloc(sizeof(int) * size);

        if (new_arr != NULL) {
            for (int i = 0; i < size; ++i) {
                new_arr[i] = src[i] ;
            }
            return new_arr;
        } else {
            return NULL;
        }
    } else {
        return NULL;
    }
}

