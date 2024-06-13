//Escreva um programa que leia numero inteiros no intervalos[0,50] e os armazene em um vetor com 10 posições.
//Preencha um segundo vetor apenas com os números ímpares do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.

#include <stdio.h>
#define T 10
int main(){
    int num, v[T], i, v2[T], j;
    i = 0;
    j = 0;
    while (i < T){
        printf("Escreva um numero entre 0 a 50: ");
        scanf("%d", &num);
        if (num >=0 && num <=50){
            v[i] = num;
            i++;

           if(num %2 != 0){
            v2[j] = num;
            j++;
           }
        }
        else{
            printf("Numero invalido\n");
        }   
    }
    printf("\nVetor Completo\n");
    for (i=0; i<T; i++){
        printf("%d ", v[i]);
    }
    printf("\nVetor Impares\n");
    for ( i = 0; i < j; i++){
        printf("%d ", v2[i]);
    }
    
    return 0;
}