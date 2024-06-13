/*5. Leia uma matriz 5 x 5. Leia tambem um valor ´ X. O programa devera fazer uma busca ´
desse valor na matriz e, ao final, escrever a localizac¸ao (linha e coluna) ou uma mensa- ˜
gem de “nao encontrado”. */

#include <stdio.h>
#define T1 5
#define T2 5

int main() {
    int matriz[T1][T1];
    int x;
    int encontrado = 0; 

    //Pede ao usuário o valor da matriz
    printf("Digite os elementos para a mtriz\n");
    for (int i = 0; i < T1; i++){
        for (int j = 0; j < T2; j++){
            printf("Elemento na posicao m[%d][%d]: ", i + 1, j + 1 );
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\n");

    //Pede ao usuário o valor a ser procurado (x) 
    printf("Digite o valor a ser procurado: ");
    scanf("%d", &x);

    //Procura o valor de x
    for (int i = 0; i < T1; i++){
        for (int j = 0; j < T2; j++){
            if (matriz[i][j] == x){
                printf("Valor %d encontrado na linha %d, coluna %d\n", x, i + 1, j + 1);
                encontrado = 1;
            }
        }
    }
    
    if (!encontrado){
        printf("Valor nao encontrado\n");
    }

    return 0;
}