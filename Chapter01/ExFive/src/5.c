//
// Created by Ngoc Anh on 04/05/2026.
//
#include <stdio.h>

int main() {
    int n;
    long sum = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Tong = %ld", sum);
    return 0;
}