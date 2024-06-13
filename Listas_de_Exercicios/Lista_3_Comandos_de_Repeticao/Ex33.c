/*Dados n e dois números inteiros positivos, i e j, diferentes de 0, imprimir em ordem
crescente os n primeiros naturais que sao múltiplos de i ou de j e ou de ambos. Exemplo:
Para n = 6, i = 2 e j = 3 a saıda devera ser: 0,2,3,4,6,8.*/

#include <stdio.h>
int main(){

    int n, i, j;

    printf("Por favor, insira quantos numeros naturais voce deseja encontrar: \n");
    scanf("%d", &n);
    printf("Digite o primeiro numero inteiro positivo diferente de zero.\n");
    scanf("%d", &i);
    printf("Digite o segundo numero inteiro positivo diferente de zero.\n");
    scanf("%d", &j);

    printf("\n");

    int count = 0;
    int num = 0;

    printf ("OS MULTIPLOS NATURAIS SAO: \n");
    
    while (count < n){
        if ( num % i == 0 || num % j == 0){
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

    return 0;
}