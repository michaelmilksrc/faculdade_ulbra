#include <stdio.h>
#include <stdlib.h>

int main() {
    // definindo variáveis
    int a = 5, b = 3;

    // soma
    printf("\nA soma de a e b = %d", a + b);
    printf("\nA soma de %d e %d = %d", a, b, a + b);

    // subtração
    printf("\nA subtracao de %d e %d = %d", a, b, a - b);

    // divisão
    printf("\nA divisao de %d e %d = %d", a, b, a / b);

    // multiplicação
    printf("\nA multiplicacao de %d e %d = %d", a, b, a * b);

    // resto da divisão
    printf("\nO resto da divisao de %d e %d = %d", a, b, a % b);

    // valor absoluto
    printf("\nO valor absoluto de -3 = %d", abs(-3));

    printf("\n");

    // pausando
    system("pause");

    return 0;
}
