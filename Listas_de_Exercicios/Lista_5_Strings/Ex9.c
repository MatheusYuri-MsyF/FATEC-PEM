/*Escreva um programa que substitui as ocorrencias de um caractere ‘0’ em uma string por ˆ
outro caractere ‘1’.*/

#include <stdio.h>

int main(){
    char str[100];
    
    //Pede ao usuário que digite uma string
    printf("Digite uma string numerica: ");
    scanf("%99[^\n]", str);

    //Faz a troca de 0 por 1
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '0'){
            str[i] = '1';
        }
    }
    
    printf("O valor apos a troca do 0 pelo 1 eh: %s\n", str);

    
    return 0;
}