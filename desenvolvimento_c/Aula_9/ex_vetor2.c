//Ler um vetor, encontrar o menor valor, exibir e contar quantas ocorrências existem no vetor

#include <stdio.h>
#define T 10
int main(){

    int v[10], i, menor, cont = 0;
    //entrada
    printf("Digite %d valores pro vetor:\n", T);
    for (i = 0; i < T; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &v[i]);
    }
    //busca
    menor = v[0];    
    for (i = 1; i < T; i++){
        if (v[i] < menor){
            menor = v[i];
        }
    }
    // conta as ocorrências
    for (i = 0; i < T; i++){
        if (v[i] == menor){
            cont ++;
        }
        
    }
    
    //saida
    printf("O menor elemento eh %d \n", menor);
    printf("A sua ocorrencia foi de %d", cont);

    return 0;
}