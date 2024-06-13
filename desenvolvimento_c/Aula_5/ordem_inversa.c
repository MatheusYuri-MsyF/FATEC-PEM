// Crie um programa que lê 6 valores inteiros e, em seguida mostre na tela os valores lidos na ordem inversa.

#include <stdio.h>
#define T 6

int main(){
    int v [T];
    int i;

    
    for (i = 0; i < T; i++){
        printf("Digite 6 valores: ");
        scanf("%d", &v[i]);
    }
        printf("\nValores na ordem inversa\n");
    for (i = T-1; i >=0; i--){
        printf("%d ", v[i]); 
    }
    return 0;
}