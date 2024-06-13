/*10. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral.*/

#include <stdio.h>
#define NOTA 15
int main(){

    float v[NOTA], soma, mediageral;        
    int i;

    for (i = 0; i < NOTA; i++){
        printf("Digite a nota do %d aluno: ", i + 1);
        scanf("%f", &v[i]);
        soma += v[i];
    }

    mediageral = soma / NOTA;
    printf("A media geral eh: %.2f\n", mediageral);

    return 0;   
}