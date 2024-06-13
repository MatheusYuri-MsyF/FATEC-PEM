/*18. Escreva um algoritmo que leia certa quantidade de numeros e imprima o maior deles e ´
quantas vezes o maior numero foi lido. A quantidade de números a serem lidos deve ser ´
fornecida pelo usuario. */

#include <stdio.h>

int main(){
    int num, maior, cont = 0, quantidade;

    //Pede ao usuário quantos numeros vão ser lidos
    printf("Informe a quantidade de nuemeros a serem lidos: ");
    scanf("%d", &quantidade);

    //Pede ao usuário os numeros
    for (int i = 0; i < quantidade; i++) {
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &num);

        if (i == 0 || num > maior) {
            maior = num;
            cont = 1;
        } else if (num == maior) {
            cont++;
        }
    }
    printf("O maior numero lido foi: %d e ele apareceu %d vezes\n", maior, cont);

    return 0;
}