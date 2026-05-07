//
// Created by Ngoc Anh on 07/05/2026.
//
#include <stdio.h>

int main() {
    float km, tien = 0;

    printf("Nhap so km: ");
    scanf("%f", &km);

    if (km <= 1)
        tien = km * 15000;
    else if (km <= 5)
        tien = 15000 + (km - 1) * 13000;
    else
        tien = 15000 + 4 * 13000 + (km - 5) * 11000;

    if (km > 120)
        tien *= 0.9;

    printf("Tien taxi: %.0f", tien);

    return 0;
}