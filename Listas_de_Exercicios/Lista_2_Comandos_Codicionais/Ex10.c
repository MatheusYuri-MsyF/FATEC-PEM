/*10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde h corresponde a altura): 
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44,7  */

#include <stdio.h>

int main(){

    float altura, peso_ideal;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo, sendo (H para Homem e M para Mulher): ");
    scanf(" %c", &sexo);

    if (sexo == 'H' || sexo == 'h'){
        peso_ideal = (72.7 * altura) - 58;
        printf("O seu peso ideal eh: %.2f", peso_ideal);
    } else if (sexo == 'M' || sexo == 'm'){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O seu peso ideal eh: %.2f", peso_ideal);
    } else {
        printf("Opcao de sexo invalida. Digite novamente");
    }

    return 0;
}