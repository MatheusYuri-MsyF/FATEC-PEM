#include <stdio.h>
int main(){
#define T 12
    char palavra[T];
    
    //Quando for fazer leitura de entrada de uma string, n usar o scanf usa a leitura segura
    printf("Digite uma palavra: ");
    scanf ("%s", palavra);
    printf ("\nVoce digitou: %s\n", palavra);
    
    //Leitura segura
    printf ("\nDigite outra palavra: ");
    char c=getchar(); //Sumidouro = limpa buffer
    int i = 0;
    while (i < (T - 1) && ((c=getchar()) != '\n')){
        palavra[i++] = c;
    }
    palavra[i] = '\0';
    printf ("Agora voce digitou: %s\n", palavra);
    return 0;

}