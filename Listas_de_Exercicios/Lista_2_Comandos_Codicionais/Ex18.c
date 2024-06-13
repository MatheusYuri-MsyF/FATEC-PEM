/*18. Faça um programa que mostre ao usuario um menu com 4 opçõees de operações matematicas 
(as básicas, por exemplo). O usuário escolhe uma das opcões e o seu programa 
entao pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.*/

#include <stdio.h>

int main(){
    
    float num1, num2, resultado;
    int opcao;

    //Exibe o menu para o usuário
    printf("Escolha uma das opcoes abaixo:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n");

    printf("\n");

    //Pede para o usuário escolher uma opção
    printf("Opcao: ");
    scanf("%i", &opcao);

    printf("\n");

    //Realiza a operção escolhida e pede para o usuario digitar 2 numeros

    switch (opcao) {
        case 1:
            printf("Digite o primeiro numero para a soma: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero para a soma: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            break;
        case 2:
            printf("Digite o primeiro numero para subitrair: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero para subitrair: ");
            scanf("%f", &num2);
            resultado = num1 - num2;
            break;
        case 3:
            printf("Digite o primeiro numero para multiplicar: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero para multiplicar: ");
            scanf("%f", &num2);
            resultado = num1 * num2;
            break;
        case 4:
            printf("Digite o primeiro numero para dividir: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero para dividir: ");
            scanf("%f", &num2);
            resultado = num1 / num2;
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao Invalida!\n");
            return 0;
        break;
    }

    //Mostra o resultado de acordo com a opção escolhida
    if (opcao != 5) {
        printf("O resultado eh = %.2f", resultado);
    }
    
        

    return 0;
}
