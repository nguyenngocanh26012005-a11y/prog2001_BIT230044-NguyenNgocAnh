//
// Created by Ngoc Anh on 04/05/2026.
//
#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
};

int main() {
    struct Product p1, p2;

    printf("Nhap san pham 1:\n");
    printf("Ten: ");
    getchar(); // tránh lỗi buffer
    fgets(p1.name, sizeof(p1.name), stdin);
    printf("Gia: ");
    scanf("%f", &p1.price);

    printf("\nNhap san pham 2:\n");
    getchar();
    printf("Ten: ");
    fgets(p2.name, sizeof(p2.name), stdin);
    printf("Gia: ");
    scanf("%f", &p2.price);

    // So sánh giá
    if (p1.price > p2.price)
        printf("San pham 1 dat hon");
    else if (p1.price < p2.price)
        printf("San pham 2 dat hon");
    else
        printf("Hai san pham co gia bang nhau");

    return 0;
}