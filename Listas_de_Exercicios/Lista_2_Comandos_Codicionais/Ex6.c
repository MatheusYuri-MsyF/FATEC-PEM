/*6. Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos*/

#include <stdio.h>

int main(){
    
    int num1, num2, maior, diferenca;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2){
        maior = num1;
        diferenca = num1 - num2;
    }else{
        maior = num2;
        diferenca = num2 - num1;
    }
    
    printf("O maior numero eh: %d\n", maior);
    printf("A diferenca entre os dois numeros eh: %d", diferenca);

    return 0;
}

