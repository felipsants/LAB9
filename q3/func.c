//
// Created by cs134 on 07/06/2024.
//

#include "func.h"

#include <stdio.h>
#include <stdlib.h>

void ordenaVetor (int n, vetor v1) {

    v1.v = (int *) malloc(sizeof(int) * n);
    for(int i = 0; n > i; i++) {
        scanf("%d", &v1.v[i]);
    }

    int temp;
    for(int i = 0; n > i; i++) {
        for(int aux = i; n > aux; aux++) { // aux = posi 2, valor -1 ; i = posi 1, valor 2
            if(v1.v[aux] < v1.v[i]) {
                temp = v1.v[aux]; // -1
                v1.v[aux] = v1.v[i]; //
                v1.v[i] = temp;
            }
        }
    }

    for(int i = 0; n > i; i++) {
        printf("%d ", v1.v[i]);
    }
    free(v1.v);
}
