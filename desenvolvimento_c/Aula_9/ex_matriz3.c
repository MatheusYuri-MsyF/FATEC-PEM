//Ler uma matriz 3x3, definir e exibir sua diagonal


#include <stdio.h>
#define DIMENSAO 3
int main (){

    int m[DIMENSAO][DIMENSAO], i, j, diagonal[DIMENSAO];
    // entrada
    printf("Vamos preencher a matriz\n");
    for (i = 0; i < DIMENSAO; i++){
        for (j = 0; j < DIMENSAO; j++){
            printf("m[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
    //calculo
    for  (i = 0; i < DIMENSAO; i++){
        diagonal[i] = m[i][i];
    }
    //saida
    for (i = 0; i <DIMENSAO; i++){
        printf("\n");
        for (j = 0; j < DIMENSAO; j++){
            printf("%5d ", m[i][j]);
        }
    }
    printf("----------------------\n");
    for (j = 0; j < DIMENSAO; j++){
        printf("%5d ", diagonal[j]);
    }
    
    return 0;
}