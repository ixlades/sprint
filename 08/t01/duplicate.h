
#ifndef _DUPLICATE_H
#define _DUPLICATE_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct s_intarr {
    int *arr;
    int size;
}              t_intarr;

int arr_size_without_duplicates(int arr[], int size);
int *mx_copy_int_arr(const int *src, int size);
bool num_not_in_arr(int num, int *arr, int arr_size);
t_intarr *mx_del_dup_sarr(t_intarr *src);

#endif

