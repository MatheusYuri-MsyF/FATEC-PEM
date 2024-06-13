//10. Faça um programa que receba uma palavra e a imprima de tras-para-frente

#include <stdio.h>

int main(){
    char palavra[100];
    int tamanho = 0;

    printf("Digite um palavra para inverter: ");
    scanf("%99[^\n]", palavra);
    
    for (int i = 0; palavra[i] != '\0'; i++){
        tamanho++;
    }
    
    printf("Palavra inversa eh: ");
    for (int j = tamanho - 1; j >= 0; j--){
        printf("%c", palavra[j]);
    }

    return 0;
}