#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // definindo variáveis
    int opcao = 0;

    while (opcao < 1 || opcao > 3) {
        printf("Escolha uma opcao:");
        printf("\n-Opcao: 1");
        printf("\n-Opcao: 2");
        printf("\n-Opcao: 3");
        printf("\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Opcao 1 foi escolhida");
                break;
            case 2:
                printf("Opcao 2 foi escolhida");
                break;
            case 3:
                printf("Opcao 3 foi escolhida");
                break;
            
            default:
                printf("Opcao invalida");
                printf("\n");
                break;
        }
    }
    

    
    
    return 0;
}