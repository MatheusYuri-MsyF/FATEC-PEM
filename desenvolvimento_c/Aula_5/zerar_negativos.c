// Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuirem valores negativos.

#include <stdio.h>
#define T 10

int main(){
    int i, v[T];

    //entrada
    for (i = 0; i < T; i++){
        printf("Digite 10 valores: ");
        scanf("%d", &v[i]);
        if (v[i]< 0 ){
            v[i] = 0;
        }
    }
    printf("\n");
    //processamento    
    for (i = 0 ; i < T; i++){
        if (v[i] > 0) {
            printf("Numero positivo: %d\n", v[i]);
        } else {
            printf("Negativos zerados: %d\n", v[i]); 
        }
    }
   
       return 0;
}