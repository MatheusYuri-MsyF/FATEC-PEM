//ler dois números a e b e dizer se a é divisivel por b

#include <stdio.h>
int main(){
int a, b, divisivel; // Declaração das variáveis inteiras

printf("Digite dois numeros inteiros:\n");
scanf("%d%d", &a, &b); // Solicita ao usuário que insira dois números inteiros e os armazena em a e b.

 // Verifica se a é divisível por b.
if (a%b == 0) {
    printf("%d eh divisivel por %d\n", a, b); // Se a for divisível por b, imprime essa informação.
}
else {
    printf ("%d nao eh divisivel por %d\n", a, b); // Se a não for divisível por b, imprime essa informação.
}
    return 0;
}