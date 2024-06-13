/*3. Faça uma funcao para verificar se um número é positivo ou negativo. Sendo que o valor 
de retorno sera 1 se positivo, -1 se negativo e 0 se for igual a 0.*/

#include <stdio.h>

int verificaPositivoNegativo (float num);

int main(){
    float numero;
    float resultado;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    printf("Nuemro retornado eh = %d\n", verificaPositivoNegativo(numero));

    resultado = verificaPositivoNegativo(numero);

    if (resultado == 1 ){
        printf("Numero digitado foi positvo.\n");
    } else if (resultado == -1){
        printf("Numero digitado foi negativo.\n");
    } else {
        printf("Numero digitado foi igual a 0.\n");
    }

    return 0;
}

int verificaPositivoNegativo (float num){
    if (num > 0){
        return 1;
    } else if (num < 0){
        return -1;
    } else{
        return 0;
    }
}