#include <stdio.h>

int main() {

    int i = 10, *pi;
    float f  = 0.75, *pf;
   // printf ("Tamanho do inteiro: %d\n", sizeof(i));
   // printf("Tamanho do ponteirdo de inteiro %d\n", sizeof(pi));
   // printf("Tamanho do float %d\n", sizeof(f));
   // printf("Tamanho do ponteiro de floatm  %d\n", sizeof(pf));

    pi = &i;
    printf("Endereco do i: %p\n", &i);
    printf("Conteudo da variavel pi: %p\n", pi);
    printf("Conteudo apontado por pi: %d\n", *pi);
    printf("Endereco do pi, %p\n", &pi);

    printf("\n");

    pf =&f;
    printf("Endereco do f: %p\n", &f);
    printf("Conteudo da variavel pf: %p\n", pf);
    printf("Conteudo apontado por pf: %f\n", *pf);
    printf("Endereco do pf, %p\n", &pf);

    return 0;
}