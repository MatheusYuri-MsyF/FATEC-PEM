/*20. Faça programa que leia uma matriz 3 x 6 com valores reais.
(a) Imprima a soma de todos os elementos das colunas ímpares.
(b) Imprima a media aritmetica dos elementos da segunda e quarta colunas.
(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
(d) Imprima a matriz modificada. */

#include <stdio.h>
int main(){

    float matriz[3][6];
    float soma_impares = 0, media_segunda_quarta;
    int i, j;

    //Leitura da matriz e armazena seus elementos
    printf("Digite os elementos da matiz 3x6:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 6; j++){
            printf("Elementos na posicao m[%d %d]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    printf("\n");

    //Imprimir soma de todos os elementos das colunas ímpares
    for (i = 0; i < 3; i++){
        for (j = 0; j < 6; j++){
            if (j % 2 != 0){
                soma_impares += matriz[i][j];
            }
        }
    }
    
    printf("Soma dos elementos das colunas impares: %.2f\n", soma_impares);

    printf("\n");

    //Imprimir a media dos elementos da segunda e quarta colunas.
    for (i = 0; i < 3; i++){
        media_segunda_quarta += matriz[i][1] + matriz[i][3];
    }
    media_segunda_quarta /= 6;
    printf("Media aritmetica dos elementos da segunda e quarta colunas: %.2f\n", media_segunda_quarta);

    printf("\n");

    //Substituição dos valores da sexta coluna pela soma dos valores das colunas 1 e 2
    for (i = 0; i < 3; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    //Matriz modificada.
    printf("Matriz modificada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}