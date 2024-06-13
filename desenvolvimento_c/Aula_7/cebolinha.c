//Ler uma string, trocar r por l e exibir

#include <stdio.h>
#include<string.h>

int main(){

    char frase [50];
    int i;

    printf ("Digite uma frase: \n");
    scanf("%49[^\n]s",  frase);
    printf("Sua frase eh: %s\n", frase);

    for (i = 0; i < strlen(frase); i++){
        if (frase[i] == 'r') frase[i] = 'l';
            else if (frase[i] == 'R') frase[i] = 'L';       
    }       
            printf ("Sua frase: %s\n", frase);      
 

    return 0;   
}