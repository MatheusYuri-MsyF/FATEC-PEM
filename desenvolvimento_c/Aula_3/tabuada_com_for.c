//ler o valor n, calcular e mostrar a sua tabuada. Usando for
#include <stdio.h>
int main (){
    int i, n;
    printf ("Digite o valor pra tabuada: ");
    scanf ("%d", &n);
    printf ("\nTabuada do %d\n", n);
    for (i = 0; i <= 10; i++) {
        printf("%2d x %2d = %3d\n", n, i, n*i );
    }
    return 0;
}