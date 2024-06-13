#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100], invertida[100];
    int i, comprimento;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    comprimento = strlen(palavra) - 1;
    for (i = 0; i < comprimento; i++) {
        invertida[i] = palavra[comprimento - 1 - i];
    }
    invertida[comprimento] = '\0';

    if (strcmp(palavra, invertida)) {
        printf("%s eh um palindromo.\n", palavra);
    } else {
        printf("%s nao eh um palindromo.\n", palavra);
    }

    return 0;
}
