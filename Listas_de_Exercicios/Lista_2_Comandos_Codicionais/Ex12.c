/*12. Ler um numero inteiro. Se o número lido for negativo, escreva a mensagem “Número ´
invalido”. Se o número for positivo, calcular o logaritmo deste numero.*/

#include <stdio.h>
#include <math.h>

int main(){

    int num, logaritimo;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num < 0){
        printf("Numero invalido!");
    } else {
        logaritimo = log10(num);
        printf("O logaritimo de %d eh: %d", num, logaritimo);
    }

    return 0;

}