//7. Crie um programa que compara duas strings (nao use a funçao strcmp)

#include <stdio.h>

int main(){

    char frase1[20], frase2[20];
    int i, eh_diferente = 0;

    printf("Digite a primeira frase: ");
    scanf("%19[^\n]s", frase1);
    getchar();

    printf("Digite a seguda frase: ");
    scanf("%19[^\n]s", frase2);

    for (i = 0; !eh_diferente && frase1[i] != '\0' && frase2[i] != '\0'; i++){
        if (frase1[i] != frase2[i]) {
            eh_diferente = 1;
        }
    }
    if (eh_diferente){
        printf("As frase sao diferentes.\n");
    }
    else if (frase1[i] != frase2[i]){
        printf("As frase possuem tamanhos diferentes.");
    }
    else {
        printf("As frases sao iguais.");
    }
    
        
    return 0;
}