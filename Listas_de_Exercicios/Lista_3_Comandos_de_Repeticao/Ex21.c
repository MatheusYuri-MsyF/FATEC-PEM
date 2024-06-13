/*Faça um programa que receba dois números. Calcule e mostre:
• A soma dos numeros pares desse intervalo de números, incluindo os núumeros digitádos;
• A multiplicação dos números ímpares desse intervalo, incluindo os digitados;*/

#include <stdio.h>

int main(){

    int num1, num2, soma = 0, multi = 1, i;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &num1, &num2);

    for (i = num1; i <=num2; i++){
        if (i % 2 == 0){
            soma += i;
        } else {
            multi *= i;
        }
        
    }
    
    printf("A soma dos numeros pares eh: %d\n", soma);
    printf("A multiplicacao dos numeros impares eh: %d\n", multi);

    return 0;
}