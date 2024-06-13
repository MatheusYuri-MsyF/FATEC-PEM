//5. Faça um programa que receba um numero inteiro e verifique se este número é par ou ímpar

#include <stdio.h>
#include <math.h>

int main(){

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num %2 == 0){
        printf("O numero %d eh par", num);
    }else{
        printf("O numero %d eh impar", num);
    }
    
    return 0;
}