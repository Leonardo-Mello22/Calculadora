#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void binario(int n) {
    printf("Decimal para Binário: ");
    for (int i = 15; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

void octal(int n) {
    printf("Decimal para Octal: %o\n", n);
}

void hexadecimal(int n) {
    printf("Decimal para Hexadecimal: %X\n", n);
}

void bcd(int n) {
    int digit;
    printf("Decimal para BCD: ");
    while (n > 0) {
        digit = n % 10;
        for (int i = 3; i >= 0; i--) {
            printf("%d", (digit >> i) & 1);
        }
        printf(" ");
        n /= 10;
    }
    printf("\n");
}
