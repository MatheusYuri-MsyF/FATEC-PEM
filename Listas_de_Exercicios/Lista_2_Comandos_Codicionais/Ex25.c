/*25. Calcule as raízes da equação de 2º grau.
Lembrando que:
x = (−b ± √∆) / 2a
Onde
∆ = B² − 4ac
E ax² + bx + c = 0 representa uma equação de 2 º grau.
A variável tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não˜
é equacao de segundo grau”.
• Se ∆ < 0, não existe real. Imprima a mensagem "Não existe raiz."
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raiz é única."
• Se ∆ ≥ 0, imprima as duas raízes reais*/

#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c, delta, x1, x2;

    printf("Digite os coeficientes a, b e c da equacao de segundo grau (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Nao e equacao de segundo grau.\n");
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Nao existe raiz real.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Raiz unica: %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Raizes reais: %.2f e %.2f\n", x1, x2);
        }
    }

    return 0;
}
