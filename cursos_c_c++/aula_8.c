#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    // variável que recebe o resto da divisão do número por 3 (aleatorio entre 0 e 2)
    int aleatorio = rand() % 3;

    printf("\n%d", aleatorio);

    // variável que recebe o resto da divisão do número por 5 (aleatorio entre 1 e 5)
    int aleatorioSegundo = (rand() % 5) + 1;

    printf("\n%d", aleatorioSegundo);
    
    return 0;
}