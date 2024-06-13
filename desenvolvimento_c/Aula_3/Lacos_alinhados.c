// Laços aninhados:

// Mostrad todos o primos entre 1 e 1000
// Mostrar todos os perfeitos entre 1 e 1000
// Mostrar todos os triangulares entre 1 e 1000
#include <stdio.h>

int main() {
    int i, j, cont, soma;

    // Mostrar todos os primos entre 1 e 1000
    printf("Numeros primos entre 1 e 1000:\n");
    for (i = 2; i <= 1000; i++) { // Loop para iterar através dos números de 2 a 1000
        cont = 0; // Inicializar contador para verificar a quantidade de divisores
        for (j = 1; j <= i; j++) { // Loop para verificar se i é primo
            if (i % j == 0) { // Se i for divisível por j
                cont++; // Incrementar o contador
            }
        }
        if (cont == 2) { // Se i tiver exatamente dois divisores (1 e ele mesmo)
            printf("%d ", i); // Imprimir i, pois é primo
        }
    }
    printf("\n\n");

    // Mostrar todos os números perfeitos entre 1 e 1000
    printf("Numeros perfeitos entre 1 e 1000:\n");
    for (i = 1; i <= 1000; i++) { // Loop para iterar através dos números de 1 a 1000
        soma = 0; // Inicializar soma para calcular a soma dos divisores de i
        for (j = 1; j < i; j++) { // Loop para calcular a soma dos divisores de i
            if (i % j == 0) { // Se j for divisor de i
                soma += j; // Adicionar j à soma
            }
        }
        if (soma == i) { // Se a soma dos divisores de i for igual a i
            printf("%d ", i); // Imprimir i, pois é um número perfeito
        }
    }
    printf("\n\n");

    // Mostrar todos os números triangulares entre 1 e 1000
    printf("Numeros triangulares entre 1 e 1000:\n");
    for (i = 1; i <= 1000; i++) { // Loop para iterar através dos números de 1 a 1000
        soma = 0; // Inicializar soma para calcular a soma dos primeiros números naturais
        for (j = 1; j <= i; j++) { // Loop para calcular a soma dos primeiros números naturais até i
            soma += j; // Adicionar j à soma
            if (soma == i) { // Se a soma dos primeiros números naturais até j for igual a i
                printf("%d ", i); // Imprimir i, pois é um número triangular
                break; // Parar o loop interno
            }
        }
    }
    printf("\n");

    return 0;
}