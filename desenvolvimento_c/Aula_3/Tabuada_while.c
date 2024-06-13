// ler o valor n, calcular e mostrar a sua tabuada. Usando for
#include <stdio.h>
int main()
{
    int i, n;
    printf("Digite o valor pra tabuada:  ");
    scanf("%d", &n);
    printf("\nTabuada do %d\n", n);
    i = 0;
    while (i <= 10)
    {
        printf("2%d x %2d = %3d\n", n, i, n * i);
        i++;
    }
    return 0;
}