//4. Faça um programa que leia um nome e imprima as 4 primeiras letras do nome.

#include <stdio.h>
#define T 20

int main(){
    char nome[T];

    //Pede ao usuario que digite um nome
    printf("Digite um nome: ");
    scanf("%19[^\n]", nome);

    //Mostra as 4 primeiras letras do nome
    printf("As quatros primeiras letra do nome sao: [");
    for (int i = 0; i < 4; i++){
        printf("%c", nome[i]);
        if (i < 3){
            printf(", ");
        }
    }

    printf("]\n");

    return 0;
}