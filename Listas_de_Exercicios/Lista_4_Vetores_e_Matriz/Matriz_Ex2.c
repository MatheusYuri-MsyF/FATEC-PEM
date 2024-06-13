/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida*/

#include <stdio.h>
int main(){

    int m[5][5];
    int i, j;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            m[i][j] = 0;
        }
    }
    
    for (i = 0; i < 5; i++){
        m[i][i] = 1;
    }
    
    printf("Matriz obtida:\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}