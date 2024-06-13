// tabuada do 1 ao 10
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    char c;
    for (n = 1; n <= 10; n++)
    {
        printf("\nTabuada do %d\n", n);
        for (i = 0; i <= 10; i++)
        {
            printf("%2d x %2d = %3d\n", n, i, n * i);
        }
        printf("Digite <enter> tecla pata continuar.");
        c = getchar();
        system("cls");
    }
    return 0;
}