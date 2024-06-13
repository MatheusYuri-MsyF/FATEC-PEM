/*23. Determine se um determinado ano lido e bissexto. Sendo que um ano é bissexto se
for divisível por 400 ou se for divisível por 4 e nao for divisível por 100. Por exemplo:
1988, 1992, 1996*/

#include <stdio.h>
int main()
{
    int ano;
    
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d eh um ano bissexto.\n", ano);
    } else {
        printf("%d nao eh um ano bissexto.\n", ano);
    }

    return 0;
}