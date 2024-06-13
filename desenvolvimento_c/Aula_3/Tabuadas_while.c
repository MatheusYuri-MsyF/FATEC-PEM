// tabuada do 1 ao 10
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    char c;
    n = 1;
    while (n <= 10)
    {
        printf("\nTabuada do %d\n", n);
        i = 0;
        while (i <= 10)
        {
            printf("%2d x %2d = %3d\n", n, i, n * i);
            i++;
        }

        printf("Digite <enter> tecla pata continuar.");
        c = getchar();
        system("cls");
        n++;
    }
    return 0;
}