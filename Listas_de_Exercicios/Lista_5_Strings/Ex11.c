/*11. Faça um programa que receba do usuario uma string. O programa imprime a string sem 
suas vogais.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Digite uma palavra: ");
    scanf("%99[^\n]", str);

    printf("A palavra sem vogais eh: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); // Convertendo o caractere para minúsculo

        // Verifica se o caractere não é uma vogal ('a', 'e', 'i', 'o', 'u')
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            printf("%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}
