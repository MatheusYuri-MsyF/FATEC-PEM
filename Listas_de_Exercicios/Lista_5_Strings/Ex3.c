/*3. Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’
(maiuscula ou miuscula).*/

#include <stdio.h>
#include <ctype.h>

int main(){
    char nome[50];

    printf("Digite um nome que comece com 'a' ou 'A': ");
    scanf(" %49[^\n]", nome); // Note o espaço antes de %49 para consumir qualquer espaço em branco residual

    while (tolower(nome[0]) != 'a' || nome[0] == '\0'){
        if (nome[0] == '\0') {
            printf("O nome digitado esta vazio. Por favor, digite novamente: \n");
        } else {
            printf("Nome digitado nao comeca com A ou a. Digite novamente: \n");
        }
        scanf(" %49[^\n]", nome);
    } 
    printf("Nome digitado: %s\n", nome);
    
    return 0;
}
