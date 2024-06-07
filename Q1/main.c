#include <stdio.h>
#include "funcs.h"

int main(void) {
    int n = 0;
    vetor v1, v2;

    puts("Digite um valor para n: ");
    scanf("%d",&n);
    while (n > 10 || n < 0) {
        puts("Valor invalido, digite n <= 10 e n > 0");
        scanf("%d",&n);
    }
    puts("Digite os valores do vetor: ");
    printf("Saida: %.1f",produtoInterno(n, v1, v2));

    return 0;


}
