#include "duplicate.h"

int arr_size_without_duplicates(int arr[], int size) {
    if (size <= 0) {
        return 0;
    }
    int unique_count = 1;

    for (int i = 1; i < size; i++) {
        int j;

        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }

        if (j == i) {
            unique_count++;
        }
    }
    return unique_count;
}

bool num_not_in_arr(int num, int *arr, int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] == num) {
            return false;
        }
    }

    return true;
}

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    if (src == NULL || src->arr == NULL || src->size == 0) {
        return NULL;
    }
    int unique_count = 0;
    int *temp_arr = (int*)malloc(sizeof(int) * src->size);

    if (temp_arr == NULL) {
        return NULL;
    }

    for (int i = 0; i < src->size; i++) {
        if (num_not_in_arr(src->arr[i], temp_arr, unique_count)) {
            temp_arr[unique_count] = src->arr[i];
            unique_count++;
        }
    }
   
    t_intarr *result = (t_intarr*)malloc(sizeof(t_intarr));
    if (result == NULL) {
        free(temp_arr);
        return NULL;
    }
    result->size = unique_count;
    result->arr = (int*)malloc(sizeof(int) * unique_count);
    if (result->arr == NULL) {
        free(temp_arr);
        free(result);
        return NULL;
    }
   
    for (int i = 0; i < unique_count; i++) {
        result->arr[i] = temp_arr[i];
    }
    
    free(temp_arr);
    return result;
}

