#include <stdio.h> 

int main(){

    int i;

    for (i = 0; i <256; i++){
        printf (" %3d : %c\t", i, i);
    }

    return 0;
}