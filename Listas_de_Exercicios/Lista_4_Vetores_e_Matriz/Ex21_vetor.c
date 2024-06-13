/*21. Faça um programa que receba do usuario dois vetores, A e B, com 10 numeros inteiros ´
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.*/
 
#include <stdio.h>
#define TA 10
#define TB 10

int main() {

    int A[TA], B[TB], C[10];
    int i;

    printf("Digite %d numeros inteiros pro primeiro vetor:\n", TA);

    for (i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i + 1 );
        scanf("%d", &A[i]);
    }
    
    printf("Digite %d numeros inteiros pro segundo vetor:\n", TA);

    for (i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i + 1 );
        scanf("%d", &B[i]);

    }

    for (i = 0; i < TA; i++) {
        C[i] = A[i] - B[i];
    }

    printf("O valor do novo vetor C (subrtacao de A - B) eh:");
    for (i = 0; i < TA; i++){
        printf("%d ", C[i]);
    }
    printf("\n");

    
    return 0;
}