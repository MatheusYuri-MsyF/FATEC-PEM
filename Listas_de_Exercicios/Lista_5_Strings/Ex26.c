/*26. O codigo de Cesar é uma das mais simples e conhecidas técnicas de criptografia.É um
tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta
no alfabeto abaixo dela um numero fixo de vezes. Por exemplo, com uma troca de três
posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente
um programa que faça uso desse Codigo de Cesar (3 posições), entre com uma string e
retorne a string codificada. Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR */

#include <stdio.h>
#define T 100

int main() {
    char frase[T];
    int i;

    
    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    
    for (i = 0; frase[i] != '\0'; i++) {
        
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            
            frase[i] = 'a' + (frase[i] - 'a' + 3) % 26;
        }
        
        else if (frase[i] >= 'A' && frase[i] <= 'Z') {
            
            frase[i] = 'A' + (frase[i] - 'A' + 3) % 26;
        }
    }

    
    printf("Nova string: %s\n", frase);

    return 0;
}
