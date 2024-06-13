/*Faça um programa que calcule o terno pitagórico  a, b, c, para o qual  a + b + c  =  1000. Um
terno pitagórico é um conjunto de três números naturais,  a, b, c, para a qual,
a² + b² = c²
Por exemplo
3² + 4² = 9 + 16 = 25 = 5²*/

#include <stdio.h>

int main() {
    int a=3, b=4, c=5;
    
    for ( ; a + b + c <=1000; a++){
        for (b = a + 1; a + b + c <=1000; b++){
            for (c = b + 1; a + b + c <= 1000; c++){
                //printf("a = %d, b = %d, c = %d, soma = %d\n", a, b, c, a+b+c);
                if (a + b + c == 1000 && a * a + b * b == c * c){
                    printf("a = %d, b = %d, c = %d, soma = %d\n", a, b, c, a+b+c);
                    printf("a*a = %d, b*b = %d, c*c=%d\n", a*b, a*b, c*c);
                }
                
            }
            c = 1;
        }
        b = 1;
    }
    
    

    return 0;
}
