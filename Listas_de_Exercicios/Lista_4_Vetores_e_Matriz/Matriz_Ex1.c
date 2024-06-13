//1. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores, menores e igual que 10 ela possui.

#include <stdio.h>
int main(){

    float matriz[4][4];
    int i, j, contMenor = 0, contMaior = 0, contIgual = 0;

    printf("Digite os elementos da matriz 4x4:\n");

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Elementos na posicao m[%d %d]: ", i + 1, j +1);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    printf("Sua matriz 4x4 eh:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%6.2f ", matriz[i][j]);
        }

        printf("\n");
    }
    
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (matriz[i][j] < 10){
                contMenor++;
            }
        }
    }

    printf("Essa matriz possui %d valores menores que 10\n", contMenor);

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (matriz[i][j] > 10){
                contMaior++;
            }
        }
    }
    
    printf("Essa matriz possui %d valores maiores que 10\n", contMaior);

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (matriz[i][j] == 10){
                contIgual++;
            }
        }
    }

    printf("Essa matriz possui %d valores iguais que 10\n", contIgual);

    return 0;
}