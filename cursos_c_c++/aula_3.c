#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    // definindo variáveis
    int a;
    float b;
    char c;
    bool d;

    // pasando valores
    a = 5;
    b = 2.3;
    c = 'a'; // quando for char tenque ser aspa simplies
    d = true; // true = 1, false = 0

    // escrevendo na tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %.2f", b);
    printf("\n O valor de c = %c", c);
    printf("\n O valor de d = %d", d);

    // pula linha
    printf("\n");

    // lendo valores
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c); // tenque ter o espaço para funcionar
    scanf("%d", &d);


    // escrevendo na tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %.2f", b);
    printf("\n O valor de c = %c", c);
    printf("\n O valor de d = %d", d);
    
    // pula linha
    printf("\n");

    // pausando
    system("pause");

    return 0;
}
