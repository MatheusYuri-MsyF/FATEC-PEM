/*4.Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
outro número inteiro. Ex: 1, 4, 9...*/

#include <stdio.h>
#include <math.h>

// Função que verifica se um número é um quadrado perfeito
int eh_quadrado_perfeito(int numero) {
    if (numero < 0) {
        return 0;  // Falso
    }
    int raiz = (int)sqrt(numero);
    return raiz * raiz == numero;
}

int main() {
    int numero;

    // Pedir ao usuário para digitar um número
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Verificar se o número é um quadrado perfeito
    if (eh_quadrado_perfeito(numero)) {
        printf("%d e um quadrado perfeito.\n", numero);
    } else {
        printf("%d nao e um quadrado perfeito.\n", numero);
    }

    return 0;
}
