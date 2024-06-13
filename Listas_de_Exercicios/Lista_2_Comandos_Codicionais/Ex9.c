/*9. Leia o salario de um trabalhador e o valor da prestação ao de um empréstimo. Se a
prestação for maior que 20% do salário imprima: Emprestimo não concedido, caso
contrario imprima: Empréstimo concedido.*/

#include <stdio.h>

int main() {
    float salario, prestacao, limite;

    // Solicita ao usuário que insira o salário e o valor da prestação
    printf("Digite o salario do trabalhador: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &prestacao);

    // Calcula o limite da prestação (20% do salário)
    limite = 0.2 * salario;

    // Verifica se a prestação é maior que o limite
    if (prestacao > limite) {
        printf("Emprestimo nao concedido.\n");
    } else {
        printf("Emprestimo concedido.\n");
    }

    return 0;
}
