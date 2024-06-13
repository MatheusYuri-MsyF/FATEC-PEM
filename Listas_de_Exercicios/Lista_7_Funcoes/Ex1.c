//1. Crie uma função que recebe como parametro um numero inteiro e devolve o seu dobro.

//POR VALOR
#include <stdio.h>

int dobro_valor(int n){
    return n * 2;
}

int main(){
    int num;

    printf("Digite um numero inteiro que deseja saber o dobro: ");
    scanf("%d", &num);

    printf("O dobro de %d eh = %d", num, dobro_valor(num));

    return 0;
}

//POR REFERÊNCIA
#include <stdio.h>

int dobro_referencia(int *n){
    return *n * 2;
}

int main(){
    int num;

    printf("Digite um numero inteiro que deseja saber o dobro: ");
    scanf("%d", &num);

    printf("O dobro de %d eh = %d", num, dobro_referencia(&num));

    return 0;
}