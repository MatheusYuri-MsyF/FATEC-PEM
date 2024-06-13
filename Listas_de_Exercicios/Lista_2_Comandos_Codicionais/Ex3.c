/*3. Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contrário, 
imprima o numero ao quadrado. */

#include <stdio.h>
#include <math.h>

int main(){

    float num, raiz, quadrado;

    printf("\nDigite um numero: ");
    scanf("%f", &num);

    if (num > 0){
        raiz = sqrt(num);
        printf("A raiz quadrada de %.2f eh: %.2f\n", num, raiz);
    }else{
        quadrado = num * num;
        printf("%.2f ao quadrado eh: %.2f\n", num, quadrado);
    }

    return 0;
}