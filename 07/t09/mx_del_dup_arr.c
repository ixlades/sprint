#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    if (src == NULL || dst_size == NULL) {
        return NULL;
    }
    int *temp = (int *)malloc(src_size * sizeof(int));

    if (temp == NULL) {
        return NULL;
    }
    int uniqueCount = 0;

    for (int i = 0; i < src_size; ++i) {
        int isDuplicate = 0;
        for (int j = 0; j < uniqueCount; ++j) {
            if (temp[j] == src[i]) {
                isDuplicate = 1;
                break;
            }
        }
        // If not a duplicate, add it to the temporary array
        if (!isDuplicate) {
            temp[uniqueCount++] = src[i];
        }
    }
    int *dst = mx_copy_int_arr(temp, uniqueCount);

    *dst_size = uniqueCount;
    return dst;
}

