//6. Faça um programa que leia 10 inteiros e imprima sua media.

#include <stdio.h>
int main(){

    int num, soma = 0, i, total_num = 10;
    float media;
    printf("Digite 10 valores inteiros\n");

    for (i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }
    media = soma / total_num;
    printf("A media desses valores eh: %.2f", media);

    return 0;
}