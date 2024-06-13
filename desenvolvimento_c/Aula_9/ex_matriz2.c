//Ler uma matriz 4x3 e calcular a soma de cada coluna, armazenando num vetor

#include <stdio.h>
#define LINHAS 4
#define COLUNAS 3
int main (){

    int m[LINHAS][COLUNAS], i, j, soma[3];
    // entrada
    printf("Vamos preencher a matriz\n");
    for (i = 0; i < LINHAS; i++){
        for (j = 0; j < COLUNAS; j++){
            printf("m[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
    //soma
    for (j = 0; j < COLUNAS; j++){
            soma[j] = m[0][j];
            for (i = 1; i < LINHAS; i++){
                soma[j] = soma[j] + m[i][j];
            }
        }
    for (i = 0; i <LINHAS; i++){
        for (j = 0; j < COLUNAS; j++){
            printf("%5d ", m[i][j]);
        }
        printf("\n");
    }
    printf("----------------------\n");
    for (j = 0; j < COLUNAS; j++){
        printf("%5d ", soma[j]);
    }
    

    return 0;
}