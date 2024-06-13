/*6. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição
das matrizes lidas.*/

#include <stdio.h>
int main(){

    float matriz1 [4][4], matriz2 [4][4],  matrizmaior [4][4];
    int i, j;

    //Faz a leitura da primeira matriz e armazena seus elementos
    printf("Digite os elementos da primeira matiz 4x4:\n");

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Elementos na posicao m[%d %d]: ", i + 1, j + 1);
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("\n");

    //Faz a leitura da primeira matriz e armazena seus elementos
    printf("Digite os elementos da segunda matriz 4x4\n");

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Elementos na posicao m[%d][%d]: ", i + 1, j +1);
            scanf("%f", &matriz2[i][j]);           
        }
    }
    
    //Econtra os maiores valores em cada posição
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (matriz1[i][j] > matriz2[i][j]){
                matrizmaior[i][j] = matriz1[i][j];
            } else {
                matrizmaior[i][j] = matriz2[i][j];
            }
        }
    }
    
    printf("\n");
    
    //Mostra os elementos da nova matriz com os maiores valores
    printf("A matriz com os maiores valores eh:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%6.2f ", matrizmaior[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}