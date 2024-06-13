/* Alocar 2 vetores do tamanho que o usuário escolher;
Ler os valores da entrada padrão;
Somar os vetores, posição a posição e armazenar num 3º vetor; 
Encontrar o maior elemento do priemeiro, o menor do segundo e exibir os resultados adequadamente.*/

#include <stdio.h>
#include <stdlib.h>

//Declaração dos protótipos das funções
void le_vetor (int *, int, const char *);
void mostra_vetor (int *, int, const char *);
void soma1 (int *, int *, int *, int);
int *soma2 (int *, int *, int);
int encontra_maior (int *, int);
void encontra_menor (int *, int, int *);

int main(){
    int tamanho;
    int *v1, *v2;
    int * vs1, *vs2;
    printf("Escolha o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    v1 = (int *) malloc (tamanho * sizeof(int));
    v2 = (int *) malloc (tamanho * sizeof(int));
    le_vetor (v1, tamanho, "digite os valores para o primeiro vetor");
    le_vetor (v2, tamanho, "digite os valores para o segundo vetor");

    mostra_vetor (v1, tamanho, "1o vetor digitado");
    mostra_vetor (v2, tamanho, "2o vetor digitado");

    //soma dos vetores, com passagem de parãmetro do vetor soma
    vs1 = (int *) malloc (tamanho * sizeof(int));
    soma1 (v1, v2, vs1, tamanho);
    mostra_vetor (vs1, tamanho, "vetor soma 1");

    //soma dos vetores, devolvendo o vetor soma
    vs2 = soma2 (v1, v2, tamanho);
    mostra_vetor (vs2, tamanho, "vetor soma 2");

    printf("O maior elemento do v1 e %d\n", encontra_maior(v1, tamanho));

    int menor;
    encontra_menor (v2, tamanho, &menor);
    printf ("O menor elemento do v2 e %d\n", menor);
    return 0;
}

//Implementação das funções
void le_vetor (int *v, int t, const char * msg){
    int i;
    printf("\n%s\n", msg);
    for (i = 0; i < t; i++){
        printf("%do valor: ", i+1);
        scanf("%d", &v[i]);
    }  
}
void mostra_vetor (int *v, int t, const char *msg){
    printf("\n%s\n", msg);
    for (int i = 0; i < t; i++){
        printf("%d ", v[i]);
    }
}

void soma1 (int *v1, int *v2, int *vs, int t) {
    for (int i = 0; i <t; i++){
        vs[i] = v1[i] + v2[i];
    }
}
int *soma2 (int *v1, int *v2, int t) {
    int * vs = (int *) malloc (sizeof(int) * t);
    for (int i = 0; i < t; i++){
        vs[i] = v1[i] + v2[i];
    }
    return vs;
}

int encontra_maior (int *v, int t){
    int maior = v[0];
    for (int i = 1; i < t; i++){
        if (v[i] > maior){
            maior = v[i];
        }
    }
    return maior;
} 

void encontra_menor (int *v, int t, int *menor) {
    *menor = v [0];
    for (int i = 1; i < t; i++){
        if (v[i] < *menor){
            *menor = v[i];
        }
    }
}