/*6. Faça um programa que receba do usuario um vetor com 10 posições. Em seguida deverá
ser impresso o maior, o menor do vetor e suas posições.*/

#include <stdio.h>
#define T 10
int main(){
    
    float v[T], maior, menor;
    int i, posMaior, posMenor;

    printf("Digite %d valores para o vetor:\n", T);
    for (i = 0; i < T; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
    }
    
    maior = v[0];
    menor = v[0];
    posMaior = 0;
    posMenor = 0;
    

    for (i = 0; i < T; i++){
        if (v[i] > maior){
            maior = v[i];
            posMaior = i;
        }
        if (v[i] < menor){
            menor = v[i];
            posMenor = i;
        }    
    }
    
    printf("O maior elemento do vetor eh: %.2f na posicao %d\n", maior, posMaior);
    printf("O menor elemento do vetor eh: %.2f na posicao %d\n", menor, posMenor);

    return 0;
}
