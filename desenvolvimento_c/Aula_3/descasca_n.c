// ler um número inteiro positivo qualquer e exibir seu digitos

#include <stdio.h>

int main()
{
    int n, d; // Declaração das variáveis inteiras n (o número inserido pelo usuário) e d (o dígito extraído).

    printf("Digite um numero inteiro estritamente positivo: ");
    scanf("%d", &n); // Solicita ao usuário que insira um número e armazena-o na variável n.

    // Loop while para garantir que o número inserido seja estritamente positivo.
    while (n <= 0)
    {
        printf("O numero deve ser estritamente positivo: ");
        scanf("%d", &n); // Se o número não for positivo, solicita ao usuário que insira novamente.
    }
    
    // Loop while para extrair e imprimir cada dígito do número.
    while (n > 0) {
        d = n  % 10; // Calcula o último dígito do número e o armazena em d.
        printf ("Digito: %d\n", d); // Imprime o dígito atual.
        n = n / 10; // Atualiza o valor de n removendo o último dígito.
    }
    
    return 0;
}