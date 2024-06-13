/*6. Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
pessoa e a palavra “ACEITA”, caso contrario imprimir “N ´ AO ACEITA”.*/

#include<stdio.h>
int main(){
    char nome[20], sexo;
    int idade;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    getchar();
    printf("Digite o nome: ");
    scanf ("%19[^\n]s", nome);
    do{
       printf("Digite f ou m: ");
       scanf(" %c", &sexo); 
        } while (sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M');

        if(sexo == 'f' || sexo == 'F' && idade < 25) {
            printf("\n%s, ACEITA", nome);
        }
        else {
            printf ("\nNAO ACEITA\n");
        }
    return 0;
}