//
// Created by cs134 on 05/06/2024.
//

#include "funcs.h"
#include "stdio.h"

float produtoInterno (int n, vetor v1, vetor v2) {
    float soma = 0;

    for(int i = 0; n > i; i++) {
        scanf("%f",&v1.v[i]);
    }
    for(int i = 0; n > i; i++) {
        scanf("%f",&v2.v[i]);
    }
    for(int i = 0; n > i; i++) {
        soma += v1.v[i] * v2.v[i];
    }

    return soma;
}