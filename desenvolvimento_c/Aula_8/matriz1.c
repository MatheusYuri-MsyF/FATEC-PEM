// Ler uma matriz 3x3 de floats e exibir adequadamente

#include <stdio.h>
int main(){

    float m[3][3];
    int i, j;

    printf("Digite os valores para a matriz:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("m[%d, %d]: ", i+1, j+1);
            scanf("%f", &m[i][j]);
        }
        
    }
    printf("\nSua matriz:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf ("%6.2f ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}