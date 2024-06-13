/*7. Faça um programa que receba dois numeros e mostre o maior. Se por acaso, os dois 
numeros forem iguais, imprima a mensagem Numeros iguais. */

#include <stdio.h>

int main(){

    float num1, num2, maior, iguais;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2){
        maior = num1;
        printf("O maior numero eh: %.2f\n", maior);
    } else if (num2 > num1){
        maior = num2;
        printf("O maior numero eh: %.2f\n", maior);
    } else {
        printf("Numeros iguais.\n");
    }
    
    

    return 0;
}