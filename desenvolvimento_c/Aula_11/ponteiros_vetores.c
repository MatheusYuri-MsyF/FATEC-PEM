#include <stdio.h>
#include <stdlib.h>

int main() {

    //int v[1000000];
    int *v, i;

    printf("Tamanho de v antes: %d\n", sizeof(v));

    v = (int *) malloc (10 * sizeof(int));
    printf("Tamanho de v depois: %d\n", sizeof(v));
    printf("Valor do V: %p\n", v);
    printf("\n");
    printf ("Valores nas posicoes do vetor:\n");
    for ( i = 0; i < 10; i++){
        printf("posicao: %p, valor: %d\n", v + i, v[i]);
    }
    
    return 0;
}