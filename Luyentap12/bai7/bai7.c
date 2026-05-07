//
// Created by Ngoc Anh on 07/05/2026.
//
#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Nhap ky tu: ");
    scanf(" %c", &c);

    if (isdigit(c))
        printf("Ky tu so la: %c", c);
    else if (isalpha(c))
        printf("Ky tu chu la: %c", toupper(c));
    else
        printf("Khong phai so hoac chu");

    return 0;
}