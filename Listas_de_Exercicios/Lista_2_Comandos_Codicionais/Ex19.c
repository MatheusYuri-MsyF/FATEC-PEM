/*19. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou
5, mas nao simultaneamente pelos dois*/

#include <stdio.h>
#include <math.h>
int main()
{
    int numero_int, verificador;
    float numero_float;

    printf("Digite um numero inteiro: ");
    verificador = scanf("%f", &numero_float);

    if (verificador != 1 || numero_float != floor(numero_float)){
        printf ("Por favor, digite um valor inteiro.\n");
    }
    else{
        numero_int = (int)numero_float;
    
        if (numero_int % 3 == 0 && numero_int % 5 == 0 ) {
            printf("%d eh divisivel por 3 e por 5.", numero_int);
        }
        else if (numero_int % 3 == 0){
            printf("%d eh divisive apenas por 3 e nao eh pelo 5.", numero_int);
     }
        else if (numero_int % 5 == 0){
            printf("%d eh divisivel apenas por 5 e nao eh pelo 3.",  numero_int);
        }
        else{
            printf("%d nao eh divisivel nem por 3 e nem por 5.", numero_int);
        }
   }

    return 0;
}