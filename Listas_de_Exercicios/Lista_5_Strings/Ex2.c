//2. Crie um programa que calcula o comprimento de uma string (nao use a função strlen)

#include <stdio.h> 

int main(){

    char frase[100];
    int i, comprimento = 0;

    printf("Digite a sua frase: ");
    scanf("%99[^\n]", frase);
    
    for (i = 0; frase[i] != '\0'; i++){
        comprimento++;
    }
        
    printf("O comprimento da sua frase eh: %d", i);

    return 0;
}