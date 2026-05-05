//
// Created by Ngoc Anh on 05/05/2026.
//
#include <stdio.h>

void giaiPT(int a, int b) {
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo so nghiem\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    } else {
        float x = (float)(-b) / a;
        printf("Nghiem x = %.2f\n", x);
    }
}

int main() {
    int a, b;
    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);

    giaiPT(a, b);

    return 0;
}