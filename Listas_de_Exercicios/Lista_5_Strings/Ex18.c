/*18. Faca um programa em que troque todas as ocorrencias de uma letra L1 pela letra L2 em 
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuario. */

#include <stdio.h>
#define T 100

int main() {
    char frase[T], l1, l2;
    int i;

    // Leitura da frase
    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);
    getchar(); 

    // Leitura das letras a serem substituídas
    printf("Digite a letra que deseja substituir: ");
    scanf("%c", &l1);
    getchar(); 

    printf("Digite a letra pela qual deseja substituir: ");
    scanf("%c", &l2);

    // Troca de todas as ocorrências de l1 por l2 na frase
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == l1) {
            frase[i] = l2;
        }
    }

    // Impressão da frase modificada
    printf("Frase modificada: %s\n", frase);

    return 0;
}
