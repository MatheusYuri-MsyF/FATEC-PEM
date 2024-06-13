/*21. Escreva o menu de opc¸oes abaixo. Leia a opção do usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opc¸ao for inválida. ´
Escolha a opção:
1- Soma de 2 núumeros.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção*/

#include <stdio.h>
int main()
{
    int opcao;
    float num1, num2, resultado;

    printf("1- Soma de 2 numeros.\n"
           "2- Diferenca entre 2 numeros.\n"
           "3- Produto entre 2 numeros.\n"
           "4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");

    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Digite dois numeros para saber a soma deles: ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 + num2;
        printf("A soma eh: %.2f\n", resultado);
        break;
    case 2:
        printf("Digite dois numeros para saber a diferenca deles: ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 - num2;
        printf("A diferenca eh: %.2f\n", resultado);
        break;
    case 3:
        printf("Digite dois numeros para saber o produto deles: ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 * num2;
        printf("O produto eh: %.2f\n", resultado);
        break;

    case 4:
        printf("Digite dois numero para fazer a divisao deles: ");
        scanf("%f %f", &num1, &num2);
        if (num2 != 0){
            resultado = num1 / num2;
            printf("A divisao eh: %.2f", resultado);
        }
        else{
            printf("ERRO! O denominador nao pode ser 0.\n");
        }
        break;
    default:
        printf("ERRO! Opcao invalida. Por favor tente novamente.\n");
        break;
    }

    return 0;
}