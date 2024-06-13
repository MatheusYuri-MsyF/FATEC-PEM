/*4.Leia uma matriz 4 x 4, imprima a matriz e retorne a localizac¸ao (linha e a coluna) do ˜
maior valor.*/

#include <stdio.h>
int main(){

    int m[4][4], linha_maior, coluna_maior;
    int i, j;
    int maior_valor = -999999;

    printf ("Digite os elemento da matriz 4x4:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Elementos na posicao m[%d %d]: ", i + 1, j +1);
            scanf("%d", &m[i][j]);

            if (m[i][j] > maior_valor){
                maior_valor = m[i][j];
                linha_maior = i + 1;
                coluna_maior = j + 1;
            }
        }
    }
    
    printf("\nMatriz:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("\nO maior valor da matriz eh: %d", maior_valor);
    printf("\nEsta na linha: %d", linha_maior);
    printf("\nEsta na coluna: %d\n", coluna_maior);

    return 0;
}

