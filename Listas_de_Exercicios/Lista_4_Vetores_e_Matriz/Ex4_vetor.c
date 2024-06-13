/*4. Faça um programa que leia um vetor de 8 posiçõees e, em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
devera escrever a soma dos valores encontrados nas respectivas posições X e Y. */

#include <stdio.h>
#define T 8
int main(){

    float v[T], soma;
    int i, X, Y;

    printf("Digite %d valores para o vetor:\n", T);

    for (i = 0; i < T; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    do{
        printf("\nDigite dois indices X e Y (entre 1 e 8) para somar os valores das respectivas posices:\n");
        printf("Valor de X: ");
        scanf("%d", &X);
        printf("Valor Y: ");
        scanf("%d", &Y);
        
        if (X < 1 || X > T || Y < 1 || Y > T){
            printf("Posicao invalidada, digite novamente");
        }
                
    } while (X < 1 || X > T || Y < 1 || Y > T);
    
        soma = v[X - 1] + v[Y - 1];
        printf("A soma dos valores na posicao %d e %d eh: %.2f", X, Y,soma);
        
    return 0;
}