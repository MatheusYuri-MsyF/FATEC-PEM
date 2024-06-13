/*13. Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e
a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno
e indique se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 6.0 pontos.*/

#include <stdio.h>
int main()
{
    float nota1, nota2, nota3;
    int peso1 = 1,  peso2 = 1, peso3 = 2;
    float media_poderada, media_simples;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);

    media_simples = (nota1 + nota2 + nota3) / 3;
    media_poderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("A media simples do aluno eh: %.2f\n", media_simples);
    printf("A media ponderada do aluno eh: %.2f\n", media_poderada);

    if (media_poderada >= 6.0){
        printf("Aluno APROVADO!\n");
    } else {
        printf("Aluno REPROVADO!\n");
    }

    return 0;
}