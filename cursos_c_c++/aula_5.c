#include <stdio.h>
#include <stdlib.h>

int main() {
    // definindo variáveis
    int a = 5, opcao = 1;

    // condional simples
    if(a == 5) {
        printf("A variavel a = 5");
        printf("\n");
    }

    // Número par ou impar
    // condicional composta
    if(a % 2 == 1) {
        printf("\nA variavel a eh impar");
    } else {
        printf("\nA variavel a eh par");
    }

    printf("\n");

    if(opcao == 1) {
        printf("\nA variavel opcao eh 1");
    } else if(opcao == 2) {
        printf("\nA variavel opcao eh 2");
    } else {
        printf("\nA variavel opcao não eh 1 nem 2");
    }

    printf("\n");

    //pausando
    system("pause");

    return 0;
}
