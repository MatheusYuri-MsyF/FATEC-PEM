//Ler um vetor e encontrar o segundo elemento

#include <stdio.h>
#include <stdlib.h>

int main(){

    int t, i, *v;
    int m1, m2;
    printf ("Escolha o tamanho do vetor: ");
    scanf ("%d", &t);

    v = (int * ) malloc (t * sizeof(int));

    for (i = 0; i < t; i++){
        printf (" O valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }
    printf("\nvetore digitado:\n");
    for (i = 0; i < t; i++){
        printf("%d ", v[i]);
    }
    
    //busca
    m1 = m2 = v[0];
    for (i = 0; i < t; i++){
        if (v[i] > m1){
            m2 =1;
            m1 = v[i];
        }
        else if (v[i] > m2){
            m2 = v[i];
        }
    }
    printf("\nO rei: %d\nO principe: %d\n", m1, m2);

    return 0;
}