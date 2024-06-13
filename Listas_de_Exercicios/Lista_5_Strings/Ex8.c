/*8. Faça um programa que conte o numero de 1’s que aparecem em um string. Exemplo:
“0011001” -> 3*/

#include <stdio.h>

int main(){
    char str[100];
    int cont = 0;

    printf("Digite uma string numerica: ");
    scanf("%99[^\n]", str);

    //Calcula quantos numero 1’s aparecem
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '1'){
           cont++;
        }
    }
    
    if (cont > 0) {
        printf("O numero 1 aparece %d vezes.\n", cont);
    } else {
        printf("O numero 1 não aparece nenhuma vez.\n");
    }
   
    return 0;
}