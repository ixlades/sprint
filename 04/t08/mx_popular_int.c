int mx_popular_int(const int *arr, int size) {
    int most_common_num = arr[0];
    int most_common_count = 1;

    for (int i = 0; i < size; i++) {
        int current_num = arr[i];
        int curent_count = 1;

        // Count occurrences of the current number in the array
        for (int j = i + 1; j < size; j++) {
            if (arr[j] == current_num) {
                curent_count++;
            }
        }
        // Update most common number if needed
        if (curent_count > most_common_count) {
            most_common_num = current_num;
            most_common_count = curent_count;
        }
    }
    return most_common_num;
}

