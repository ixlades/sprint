#include <stdio.h>

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    int counter = 1;

    while (counter) {
        counter = 0;
        for (int i = 0; i < size - 1; ++i) {
            if(f(arr[i], arr[i + 1])){
                int temp = arr[i];

                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                counter = 1;
            }
        }
    }
}

