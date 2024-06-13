/*8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são validas e
exiba na tela a media destas notas. Uma nota valida deve ser, obrigatoriamente, um 
valor entre 0.0 e 10.0, onde caso a nota nao possua um valor valido, este fato deve ser
informado ao usuario e o programa termina.
Se a média for menor que 5 mostre ao usuario que ele foi reprovado, caso o contrario
mostre que foi aprovado.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float nota1, nota2, media;

    printf("Digite a primeira nota (entre 0 e 10): ");
    scanf("%f", &nota1);

    if(nota1 < 0 || nota1 > 10) {
        printf("Essa nota não é válida, por favor faça novamente, inserindo um valor correto.");
    } else {
        printf("Digite a segunda nota (entre 0 e 10): ");
        scanf("%f", &nota2);

        if (nota2 < 0 || nota2 > 10) {
            printf("Essa nota não é válida, por favor faça novamente, inserindo um valor correto.");
        } else {
            media = (nota1 + nota2) / 2;
            printf("A média das notas é: %.2f \n", media);

            if(media >= 6) {
                printf("Você está aprovado.");
            } else {
                printf("Você está reprovado.");
            }
        }
    }
    
    return 0;
}
