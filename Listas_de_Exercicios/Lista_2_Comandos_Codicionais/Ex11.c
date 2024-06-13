/*11. Escreva um programa que leia um numero inteiro maior do que zero e devolva, na tela, a 
soma de todos os seus algarismos. Por exemplo, ao numero 251 corresponder a o valor 
8 (2 + 5 + 1). Se o numero lido nao for maior do que zero, o programa terminar a com a
mensagem “Numero inválido”.*/

#include <stdio.h>
int main(){

    int num, digito, soma = 0;

    printf("Digite um numero inteiro maior que 0: ");
    scanf("%d", &num);

    if (num <=0){
        printf("Numero invalido.\n");
    } else{

        while (num > 0) {
            digito = num % 10; // Obtém o último dígito
            soma += digito; // Adiciona o dígito à soma
            num /= 10; // Remove o último dígito
        }
        
        // Exibe a soma dos dígitos
        printf("A soma dos digitos eh: %d\n", soma);
    }
        

    return 0;
}