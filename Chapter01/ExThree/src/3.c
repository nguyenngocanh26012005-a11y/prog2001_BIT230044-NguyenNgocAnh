//
// Created by Ngoc Anh on 04/05/2026.
//
#include <stdio.h>

int main() {
    int n, sum = 0, count = 0, num = 1;

    printf("Nhap N: ");
    scanf("%d", &n);

    while (count < n) {
        sum += num;
        num += 2;   // số lẻ tiếp theo
        count++;
    }

    printf("Tong = %d", sum);
    return 0;
}