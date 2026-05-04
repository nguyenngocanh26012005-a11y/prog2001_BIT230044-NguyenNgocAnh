//
// Created by Ngoc Anh on 04/05/2026.
//
#include <stdio.h>

int main() {
    int n, isPrime = 1;

    printf("Nhap N: ");
    scanf("%d", &n);

    if (n < 2) isPrime = 0;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d la so nguyen to", n);
    else
        printf("%d khong phai so nguyen to", n);

    return 0;
}