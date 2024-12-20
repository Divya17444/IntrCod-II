#include <stdio.h>

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int uniqueIndex = 0;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[uniqueIndex] = arr[i];
            uniqueIndex++;
        }
    }

    arr[uniqueIndex] = arr[n - 1];
    uniqueIndex++;

    printf("Array after removing duplicates: ");
    for (int i = 0; i < uniqueIndex; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
