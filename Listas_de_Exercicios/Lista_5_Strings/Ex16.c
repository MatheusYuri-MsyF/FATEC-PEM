//16
#include <stdio.h>
int main(){

    char frase[100];
    int i;

    printf("Digite sua frase:\n");
    scanf("%99[^\n]", frase);
    for (i = 0; i < frase[i] != '\0'; i++){
        if((int)frase[i] >= 97 && (int)frase[i]<=122){
            frase[i] = frase[i] - 32;
        }
    }
    printf("\n%s\n", frase);

    return 0;
}