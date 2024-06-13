//5. Faça um programa que peça ao usuario para digitar 10 valores e some-os.

#include <stdio.h>
int main(){


    float num, soma = 0;
    int i;

    printf("Digite 10 valores:\n");

    for (i = 0; i < 10;  i++){
        printf("Digte o valor %d: ", i + 1);
        scanf("%f", &num);
        soma += num;
    }
    
    printf("A soma dos numeros digitado eh igual: %.2f", soma);

    return 0;
}