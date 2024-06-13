//1. Faça um programa que entao leia uma string e a imprima. 

#include <stdio.h>

int main(){

    char frase[100];
    
    printf("Digete a sua frase: ");
    scanf("%99[^\n]", frase);
    
    printf("A sua frase eh: %s", frase);

    return 0;
}