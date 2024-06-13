#include <stdio.h>

int main(){
    int i;
    float f;
    char c;
    char palavra[20], frase[20];

    // Solicita ao usuário para digitar um inteiro
    printf("Digite um inteiro: ");
    scanf("%d", &i);
    printf("Seu inteiro: %d\n", i);

    // Solicita ao usuário para digitar um float
    printf("Digite um float: ");
    scanf("%f", &f);
    printf("Seu float: %f\n", f);

    // Solicita ao usuário para digitar uma letra
    printf("Digite uma letra: ");
    scanf(" %c", &c);
    printf("Sua letra: %c\n", c);

    // Solicita ao usuário para digitar uma palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    printf("Sua palavra: %s\n", palavra);

    // Solicita ao usuário para digitar uma frase
    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);
    printf("Sua frase: %s\n", frase);

    return 0;
}