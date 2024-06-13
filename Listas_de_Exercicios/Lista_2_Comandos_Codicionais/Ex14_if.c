/*14. A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo
de 0 ate 10, respectivamente, a um trabalho de laboratório, a uma avaliacao semestral
e a um exame final. A media das três notas mencionadas anteriormente obedece aos
pesos: Trabalho de Laboratorio: 2; Avaliaço Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno esta reprovado (média entre 0 e 2,9), de
recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.*/

#include <stdio.h> 

int main() {
    float trab_lab, avali_semestral, exame_final;
    float media;
    int peso1 = 2, peso2 = 3, peso3 = 5, soma_pesos;

    printf("\nDigite a nota do trabalho de laboratorio (0 a 10): ");
    scanf("%f", &trab_lab);

    if (trab_lab < 0 || trab_lab > 10) {
        printf("Nota invalida! "); // Se a nota for inválida, imprime a mensagem e encerra o programa
    } else {
        printf("Digite a nota da avaliacao semestral (0 a 10): ");
        scanf("%f", &avali_semestral);

        if (avali_semestral < 0 || avali_semestral > 10) {
            printf("Nota invalida! "); // Se a nota for inválida, imprime a mensagem e encerra o programa
        } else {
            printf("Digite a nota do exame final (0 a 10): ");
            scanf("%f", &exame_final);

            if (exame_final < 0 || exame_final > 10) {
                printf("Nota invalida!"); // Se a nota for inválida, imprime a mensagem e encerra o programa
            } else {
                soma_pesos = peso1 + peso2 + peso3;
                media = (trab_lab * peso1 + avali_semestral * peso2 + exame_final * peso3) / soma_pesos;
                printf("\nA média ponderada do aluno eh: %.2f\n", media);
                
                if (media >= 0 && media <= 2.9){
                    printf("O aluno esta reprovado.\n");
                } else if (media >= 3 && media <= 4.9){
                    printf("O aluno esta de recuperacao.\n");
                } else { 
                    printf("O aluno esta aprovado\n");
                }
            }
        }
    }

    return 0;
}
