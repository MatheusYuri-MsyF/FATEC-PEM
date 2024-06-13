#include<stdio.h>

int main() {
    int a, cont = 0, d, metade;  // Declaração das variáveis inteiras a, cont, d e metade

    printf("Digite um numero inteiro:\n");  // Solicita ao usuário que insira um número inteiro
    scanf("%d", &a);  // Lê o número inserido pelo usuário e armazena na variável 'a'

    // Verifica se o número inserido é igual a 2, pois 2 é o único número primo par
    if (a == 2) {
        printf("%d eh primo\n", a);  // Se o número for igual a 2, imprime que é primo
    } else {
        metade = a / 2;  // Calcula a metade do número inserido para otimizar a verificação dos divisores
        for (d = 2; d <= metade && cont == 0; d++) {  // Inicia um loop que começa de 2 até a metade do número inserido
            if (a % d == 0) {  // Verifica se o número é divisível por 'd'
                cont++;  // Se for divisível, incrementa o contador 'cont'
            }
        } 

        // Se 'cont' for diferente de 0, significa que o número tem divisores além de 1 e ele próprio
        if (cont)
            printf("%d nao eh primo\n", a);  // Se 'cont' for diferente de 0, imprime que o número não é primo
        else
            printf("%d eh primo\n", a);  // Se 'cont' for igual a 0, imprime que o número é primo
    }
    
    return 0;
}
