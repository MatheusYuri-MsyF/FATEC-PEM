// Ler um número inteiro entre 100 e 999, extrair e exibir seu dígitos

#include <stdio.h>

int main()
{
    int n, i, d; // Declaração das variáveis inteiras n (o número inserido pelo usuário), i (um contador) e d (o dígito extraído).
    
    printf("Digite um numero entre 100 e 999: "); 
    scanf("%d", &n); // Solicita ao usuário que insira um número e armazena-o na variável n.

    // Loop while para verificar se o número está dentro do intervalo esperado.
    while (n < 100 || n > 999)
    {
        printf("O numero deve estar entre 100 e 999: "); // Se estiver fora do intervalo, solicita novamente ao usuário.
        scanf("%d", &n); // Lê novamente o valor inserido pelo usuário.
    }

    // Loop for para extrair e imprimir cada dígito do número.
    for (i = 1; i <= 3; i++)
    {
        d = n % 10; // Calcula o último dígito do número e o armazena em d.
        printf("Digito %d: %d\n", i, d); // Imprime o dígito atual.
        n = n / 10; // Remove o último dígito do número.
    }

    return 0; // Indica que o programa foi executado com sucesso.
}