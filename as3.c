#include <stdio.h>

int main() {
    int arr[] = {12, 5, 7, 3, 19, 1, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The smallest element in the array is %d\n", min);

    return 0;
}

