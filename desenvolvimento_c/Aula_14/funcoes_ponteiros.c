#include <stdio.h>

int soma_dobro (int *a, int *b) {
    *a = *a * 2;
    *b = *b * 2;
    return *a + *b;
}
int ordenados (int *a, int *b, int *c) {
    if (*a == *b && *b == *c) return 1;
    int menor, meio, maior;
    if (*a <= *b && *a <= *c){
        menor = *a;
        if (*b <= *c){
            menor = *b;
            maior = *c;
        }
        else{
            meio = *c;
            maior = *b;
        }
    }
    else if (*b <= *c){
        menor = *b;
        if (*a <= *c){
            meio = *a;
            maior = *c;
        }
        else {
            meio = *c;
            maior = *a;
        }
    }
*a = menor;
*b = meio;
*c = maior;
return 0;
}

int main() {
    int a = 3, b = 4;
    printf("a =%d\nb = %d\nsoma1 = %d\nsoma2 = %d\n", a, b, soma_dobro(&a, &b), soma_dobro(&a, &b),
    soma_dobro(&a, &b));
    a = 7, b = 3, c = 5;
    if (ordenados (&a, &b, &c)== 1){
        printf("valores iguais\n");
    }
    else {
        printf ("valores ordenados: %d, %d, %d\n", a, b, c);
    }
    return 0;
}