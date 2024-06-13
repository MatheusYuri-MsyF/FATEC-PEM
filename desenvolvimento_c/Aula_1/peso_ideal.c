#include <stdio.h>
#include <math.h>

int main() {
    float altura; // Variável para armazenar a altura digitada pelo usuário
    char sexo; // Variável para armazenar o sexo digitado pelo usuário
    float peso_ideal; // Variável para armazenar o peso ideal calculado

    // Solicita ao usuário que digite sua altura
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    // Solicita ao usuário que digite seu sexo ('m' para masculino e 'f' para feminino)
    printf("Digite seu sexo, sendo m(msaculino) e f(feminino): ");
    scanf(" %c", &sexo);

    // if(sexo =='m'||sexo =='M'){
        // peso_ideal = 72.7 * altura - 58;
        // printf("Seu peso ideal e: %.2f\n", peso_ideal);
    // }
    // else if(sexo =='f'||sexo =='F'){
        // peso_ideal = 62.1 * altura - 44.7;
        // printf("Seu peso ideal e: %.2f\n", peso_ideal);
    // }
    // else{
        // printf("Nao sei calcular, por favor. Use apenas m e f.");
    // } 

    // Calcula o peso ideal baseado no sexo fornecido
    peso_ideal = sexo =='M' || sexo =="m" ? 72.7*altura-58 : 62.1*altura-44.7;

    printf ("\nSeu peso ideal e: %.2f\n", peso_ideal);
    return 0;
}