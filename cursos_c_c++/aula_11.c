#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    for (int i = 0; i <= 10; i++) {
        printf("\n 5 X %d = %d", i, i * 5);
    }

    for (int i = 0; i <= 10; i++) {
        for (int cont = 0; cont <= 10; cont++) {
            printf("\n %d X %d = %d", i, cont, cont * i);
        }
    }
    
    return 0;
}