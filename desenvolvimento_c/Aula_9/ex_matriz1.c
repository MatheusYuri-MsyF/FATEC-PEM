//Ler uma matriz 4x3, verificar o maior de cada linha, armazenando-os num valor; exibir o vetor encontrado

#include <stdio.h>
#define LINHAS 4
#define COLUNAS 3
int main (){

    int m[LINHAS] [COLUNAS], i, j;
    int maior[LINHAS];

    printf ("Vamos preencher a matriz\n");
    for (i = 0; i < LINHAS; i++){
        for (j = 0; j < COLUNAS; j++){
            printf("m[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < LINHAS; i++){
        maior[i] = m[i][0];
        for (j = 1; j < COLUNAS; j++){
            if (m[i][j] > maior [i]){
                maior[i] - m[i][j];
            }
        }
    }
    //saida
    printf("\n      matriz      \tmaior\n");
    for (i = 0; i <LINHAS; i++){
        for (j = 0; j < COLUNAS; j++){
            printf("%5d ", m[i][j]);
        }
        printf("\t%5d\n", maior[i]);
    }
    
    return 0;
}