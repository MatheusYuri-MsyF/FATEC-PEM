#include <stdio.h>
int main(){

    int i;
    float f;

    for (i = 1 , f = 1; i <=14; i++){
        f = f*i;
    printf("Fatorial de %d = %.f\n", i, f);
    }
    
    return 0;
}