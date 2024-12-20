#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 3, 5};
    int key = 3;                    
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != key) {
            count++;
        }
    }

    printf("Number of values not equal to %d: %d\n", key, count);
    return 0;
}