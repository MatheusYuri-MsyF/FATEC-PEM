/*2. Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira ´
vez deve usar a estrutura de repetição for, a segunda while, e a terceira do while.*/

#include <stdio.h>
int main(){

    int i;

    printf("Numeros de 1 ate 100 usando for:\n");

    for (i = 1; i <100 ; i++){
        printf("%d ", i);
    }
    
    printf("\n\n");
    
    printf("Numeros de 1 ate 100 usando while:\n");
    i = 1;
    while (i <= 100 ){
        printf("%d ", i++);
    }
    
    printf("\n\n");

    printf("Numeros de 1 ate 100 usando do while:\n");
    i = 1;
    do{
        printf("%d ", i++);
    } while (i <= 100);
    
    return 0;
}