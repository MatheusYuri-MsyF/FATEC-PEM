/*17.Faça um programa que calcule e mostre a area de um trapézio. Sabe-se que: ´
A = ((basemaior + basemenor) ∗ altura) /2 */

#include <stdio.h>

int main(){
    
    float basemaior, basemenor, altura, area;

    //Entrada dos valores
    printf("Digite o valor da base maior: ");
    scanf("%f", &basemaior);

    printf("Digite o valor da base menor: ");
    scanf("%f", &basemenor);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    //Calculo
    area = ((basemaior + basemenor) * altura) / 2;

    //Exibição na tela
    printf("A area de um trapezio eh: %.2f", area);

    return 0;
}
