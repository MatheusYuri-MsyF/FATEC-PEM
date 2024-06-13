/*13. Ler uma frase e contar quantos caracteres sao espacos em brancos. Lembre-se que 
uma frase e um conjunto de caracteres (vetor).*/

#include <stdio.h>
#define T 100

int main(){

    char frase[T];
    int i, cont_espaco = 0;

    //Leitura da frase
    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    //Contagem dos espaços em branco
    for (i = 0; frase[i] != '\0' ; i++){
        if (frase[i] == ' ') {
            cont_espaco++;
        }
    }

    printf("Numero de espacos em branco na frase: %d\n", cont_espaco);
        

    return 0;
}