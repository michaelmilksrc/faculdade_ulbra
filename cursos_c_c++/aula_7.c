#include <stdio.h>
#include <stdlib.h>

int main() {
    // definir variáveis
    int a = 5;
    char b = "x";

    switch (a) {
        case 1:
            printf("\nOpcao escolhida: 1");
            break;
        case 2:
            printf("\nOpcao escolhida: 2");
            break;
        case 3:
            printf("\nOpcao escolhida: 3");
            break;
        default:
            printf("\nOpcao invalida");
            break;
    }
    return 0;
}


