//5. Digite um nome, calcule e retorne quantas letras tem esse nome.

#include <stdio.h>
int main(){

    char nome [50];
    int i;
    //int tamanho;

    printf ("Digite uma frase: ");
    scanf("%49[^\n]s",  nome);
    
    // tamanho = strlen(nome);
    // printf("Tamanho do nome: %d\n", tamanho);

    for (i = 0; nome[i] != '\0'; i++){}
    printf ("Tamanho do nome: %d", i);
    

    return 0;
}
