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

int main() {
    int escolha;
    int numero;
    float numReal;
    double numRealDouble;

    do {
        printf("\nCalculadora Programador Didática\n");
        printf("Escolha uma opção:\n");
        printf("1 - Converter decimal para outras bases\n");
        printf("2 - Converter decimal para complemento a 2 (16 bits)\n");
        printf("3 - Converter número real para IEEE 754 (float e double)\n");
        printf("4 - Sair\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Digite um número decimal: ");
                scanf("%d", &numero);
                binario(numero);
                octal(numero);
                hexadecimal(numero);
                bcd(numero);
                break;
            case 2:
                printf("Digite um número decimal: ");
                scanf("%d", &numero);
                complemento2(numero);
                break;
            case 3:
                printf("Digite um número real (float): ");
                scanf("%f", &numReal);
                floatIEEE754(numReal);
                printf("Digite um número real (double): ");
                scanf("%lf", &numRealDouble);
                doubleIEEE754(numRealDouble);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (escolha != 4);

    return 0;
}


