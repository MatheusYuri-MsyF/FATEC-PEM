/*3 Faca um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da
coluna de cada elemento. Em seguida, imprima na tela a matriz.*/

#include <stdio.h>
int main(){

    int m[4][4];
    int i, j;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            m[i][j] = i * j;
        }
    }
    
    printf ("Matriz obtida:\n");

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}