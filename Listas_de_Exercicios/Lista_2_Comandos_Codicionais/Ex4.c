/*4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O numero digitado ao quadrado 
• A raiz quadrada do numero digitado*/

#include <stdio.h>
#include <math.h>

int main(){

    float num, quadrado, raiz;

    do{
    
    printf("\nDigite um numero positvo: ");
    scanf("%f", &num);

    if (num > 0){
        quadrado = num * num;
        raiz = sqrt(num);
        printf("%.2f ao quadrado eh: %.2f\n", num, quadrado);
        printf("A raiz quadrada de %.2f eh: %.2f", num, raiz);
    } else{
        printf("O numero digitado eh negativo, por favor digite outro numero.\n");
    }

     } while (num < 0);
    

    return 0;
}