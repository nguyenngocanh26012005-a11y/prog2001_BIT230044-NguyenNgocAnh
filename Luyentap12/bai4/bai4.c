//
// Created by Ngoc Anh on 05/05/2026.
//
#include <stdio.h>

int timMin(int arr[], int n) {
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;

    int min = timMin(arr, n);

    printf("Gia tri nho nhat: %d\n", min);

    return 0;
}