/*17. Leir uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escrever
o numero de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi 
na prova 2, e o numero de alunos cuja pior nota foi na prova 3. Em caso de empate
das piores notas de um aluno, o criterio de desempate é arbitrário, mas o aluno deve ser 
contabilizado apenas uma vez.*/

#include <stdio.h>
#define ALUNOS 10
#define PROVAS 3
int main(   ){

    float boletim[ALUNOS][PROVAS], menor;
    int i, j, pos;
    int pior[PROVAS];

    for (i= 0; i < ALUNOS; i++){
        printf("Digite as notas do aluno %d: \n",i + 1);
        for (j = 0; j < PROVAS; j++){
            scanf("%f", &boletim[i][j]);

            while (boletim[i][j]< 0 || boletim[i][j] > 10){
                printf("\nNota invalida:\n");
                scanf("%f", &boletim[i][j]);
            }
        }
    }
    for (i = 0; i < PROVAS; i++) {
        pior[i] = 0;
    }
    
    for (i = 0; i < ALUNOS; i++){
        menor = boletim[i][0];
        pos = 0;
        for (j = 1; j < PROVAS; j++){
            if (boletim[i][j] < menor){
                menor = boletim[i][j];
                pos = j;
            }
        }
        pior[pos]++;
    }
    for (i = 0; i < PROVAS; i++){
        printf("\n%d alunos tiveram a pior nota na P%d", pior[i], i+1);
    }
    
    return 0;
}