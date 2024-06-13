// Ler valores e somar até o usuario digitar 0, exibir a soma

#include <stdio.h>
int main(){
    int n, soma = 0; //Variáveis 'n' para armazenar o valor digitado pelo usuário e 'soma' para armazenar a soma dos valores
    int i = 1; // Inicializa o contador

    printf("Digite sua lista de valores, 0 encerra.\n");

    while (1){ // Loop infinito (pode ser interrompido com break)
        printf("Valor %d: ", i); // Exibe o número do valor sendo solicitado ao usuário
        scanf("%d", &n); // Lê o valor digitado pelo usuário e o armazena na variável 'n'


        if (n == 0){ // Verifica se o valor digitado é 0
            break; // Se for 0, sai do loop
        }
        
        soma += n; // soma = soma +n; Adiciona o valor digitado à variável 'soma'
        i++; // Incrementa o contador para acompanhar o número de valores inseridos
        
    }
    printf("soma = %d\n", soma); // Exibe a soma dos valores inseridos
    return 0;
}