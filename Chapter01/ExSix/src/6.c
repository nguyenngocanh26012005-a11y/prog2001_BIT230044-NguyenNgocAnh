//
// Created by Ngoc Anh on 04/05/2026.
//
#include <stdio.h>

long sumSquare(int n) {
    if (n == 1)
        return 1;
    return n * n + sumSquare(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Tong = %ld", sumSquare(n));
    return 0;
}