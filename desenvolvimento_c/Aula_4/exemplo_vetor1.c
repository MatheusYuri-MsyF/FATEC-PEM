//Pedir 10 valores para o usuário e armazena-los num vetor

#include <stdio.h>
int main () {
    int i = 0;
    int v[10];
    // printf ("Digite o valor da posicao %d: ", i);
    // scanf ("%d", &v[i]);
    // i++;
    // printf ("Digite o valor da posicao %d: ", i);
    // scanf ("%d", &v[i]);
    // i++
    // printf ("Digite o valor da posicao %d: ",i);
    // scanf ("%d", &v[i]);
    // i++;
    // NÃO FAZER DESSE JEITO, USA LAÇO.
    // Lendo os valore e armazenando no vetor
    for (i=0; i<10; i++) {
        printf ("Digite o valor da posicao %d: ",i + 1);
        scanf ("%d", &v[i]);
    }
    //  Exibir a lista de valores digitados
    for (i=0; i<10; i++) {
        printf ("Posicao: %d, valor: %d\n", i + 1, v[i]);
    }
    return 0;
}