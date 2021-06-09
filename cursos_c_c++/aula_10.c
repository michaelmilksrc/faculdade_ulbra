#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // definindo variáveis
    int a = 1, b = 10;

    do {
        printf("\n%d", a);
        a++;
    } while (a <= 10);

     do {
        printf("\n%d", b);
        b--;
    } while (b >=1);
    
    return 0;
}