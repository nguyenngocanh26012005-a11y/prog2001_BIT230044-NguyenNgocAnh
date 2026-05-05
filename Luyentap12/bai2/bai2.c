//
// Created by Ngoc Anh on 05/05/2026.
//
#include <stdio.h>

int main() {
    for (int i = 10; i <= 99; i++) {
        int chuc = i / 10;
        int donvi = i % 10;

        if (chuc * donvi == 2 * (chuc + donvi)) {
            printf("%d ", i);
        }
    }
    return 0;
}