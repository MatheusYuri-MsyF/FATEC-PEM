//1. Faça um programa que receba dois numeros e mostre qual deles é o maior. 

#include <stdio.h>

int main(){
    
    float num1, num2, maior;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2){
        maior = num1;
    } else {
        maior = num2;
    }
    printf("O numero %.2f eh maior", maior);
    
    return 0;
}




