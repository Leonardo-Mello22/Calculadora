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
void complemento2(int n) {
    printf("Decimal para Complemento a 2 (16 bits): ");
    if (n < 0) {
        n = (~(-n) + 1) & 0xFFFF;
    }
    for (int i = 15; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    void floatIEEE754(float num) {
    union {
        float input;
        int output;
    } data;

    data.input = num;
    printf("Número em IEEE 754 (float): Sinal: %d, Expoente: %02X, Fração: %06X\n",
           (data.output >> 31) & 1,
           (data.output >> 23) & 0xFF,
           data.output & 0x7FFFFF);
}

void doubleIEEE754(double num) {
    union {
        double input;
        long long output;
    } data;

    data.input = num;
    printf("Número em IEEE 754 (double): Sinal: %d, Expoente: %03X, Fração: %013llX\n",
           (data.output >> 63) & 1,
           (data.output >> 52) & 0x7FF,
           data.output & 0xFFFFFFFFFFFFF);
}
    printf("\n");
}
