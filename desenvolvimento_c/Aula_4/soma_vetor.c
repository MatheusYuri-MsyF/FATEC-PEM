// Ler uma lista de valores, armazená-los em um vetor, somar todos e mostrar o resultado

#include <stdio.h>

int main(){
    int v[10], i, soma;
    //Ler os valores do vetor
    for ( i=0; i<10; i++){
        printf ("Digite o valor para a prosicao %d ", i + 1);
        scanf ("%d",&v[i]);
    }
    //somar os valores do vetor
    for  (i = 0, soma=0; i <10; i++){
        soma = soma + v[i];
    }
    //Exibir a soma
    printf("\nSoma = %d\n", soma);

    return 0;
}