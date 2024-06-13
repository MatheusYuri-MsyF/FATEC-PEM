/*19. Escreva um algoritmo que leia um numero inteiro entre 100 e 999 e imprima na saída
cada um dos algarismos que compoem o número*/

#include <stdio.h>

int main(){
    int num, dig1, dig2, dig3;

    
    printf("Digite um numero inteiro entre 100 e 999: ");
    scanf("%d", &num);

    while (num < 100 || num > 999){
        printf("O numero digitado deve estar entre 100 e 999\nPor favor digite novamente: ");
        scanf("%d", &num);
    }

    //Extrai os algarismos do numero
    dig1 = num / 100;
    dig2 = (num % 100) / 10;
    dig3 = num % 10;

    //Imprimir os algorismos
    printf("Os algarismos do numero %d sao: %d, %d e %d\n", num, dig1, dig2, dig3);   

    return 0;
}