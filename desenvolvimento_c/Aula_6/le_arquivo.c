#include <stdio.h>
int main(){

    int numero;
    char c;
    while ((c=getchar()) !=EOF) {
        scanf("%d", &numero);
        printf ("%d\n", numero);
    }

    return 0;
}