/*3. Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva
na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” apos a 
contagem.*/

#include <stdio.h>
int main(){

    int regressiva = 10;

    printf("Contagem regressiva:\n");
    while (regressiva >= 0  ){
        printf("%d ", regressiva);
        regressiva--;
    }
    printf("\nFIM");


    return 0;
}