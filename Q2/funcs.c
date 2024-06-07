//
// Created by cs134 on 05/06/2024.
//
#include "funcs.h"

#include <stdio.h>

void ordenaFuncs(int n, int m, vetor v1, vetor v2) {
    int tamanhoTotal = n + m;
    vetor v3;

    for(int i = 0; n > i; i++) {
        scanf("%d",&v1.v[i]);
    }
    for(int i = 0; m > i; i++) {
        scanf("%d",&v2.v[i]);
    }

    for(int i = 0; n > i; i++) {
        v3.v[i] = v1.v[i];
    }
    for(int i = n, aux_i = 0; tamanhoTotal >= i; i++, aux_i++) {
        v3.v[i] = v2.v[aux_i];
    }

    int temp;
    for ( int i = 0; i < tamanhoTotal; i++ )
        for ( int j = i; j < tamanhoTotal; j++ )
            if ( v3.v[j] < v3.v[i]  )
            {
                temp = v3.v[j];
                v3.v[j] = v3.v[i];
                v3.v[i] = temp;
            }

    for(int i = 0; tamanhoTotal > i; i++) {
        printf("%d ",v3.v[i]);
    }

}
#include "funcs.h"
