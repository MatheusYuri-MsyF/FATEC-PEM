// Mostra os elementos das posições pares

#include <stdio.h> 
#define T 10
int main(){
    int v[T];
    int i;
    
    for (i = 0; i < T; i++){
        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("\nVALORES DAS POSICOES PARES:\n");
    for (i = 1; i < T; i=i+2){
        printf("%d ", v[i]);
    }
    
    return 0;
}