/*2. Facá uma funcão que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela
no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de
2000.*/

#include <stdio.h>
#include <stdbool.h>

bool eh_bissexto(int ano);
void data_extenso(int dia, int mes, int ano);

int main() {
    int dia, mes, ano;
    
    do {
        printf("Digite o dia, mes e ano (formato dd/mm/aaaa): ");
        scanf("%d/%d/%d", &dia, &mes, &ano);
        if (dia < 1 || dia > 31) {
            printf("Dia invalido, digite novamente.\n");
        } else if (mes < 1 || mes > 12) {       
            printf("Mes invalido, digite novamente.\n");
        } else if ((mes == 2 && dia > 29) || ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)) {
            printf("Dia invalido para esse mes, digite novamente.\n");        
        } else if (mes == 2 && dia == 29 && !eh_bissexto(ano)) {
            printf("Dia invalido para esse ano bissexto, digite novamente.\n");
        } else if (ano < 0) {
            printf("Ano invalido, digite novamente.\n");
        }
    } while (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0 || ((mes == 2 && dia > 29) || (mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) || (mes == 2 && dia == 29 && !eh_bissexto(ano)));
    
    data_extenso(dia, mes, ano);

    return 0;
}

bool eh_bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

void data_extenso(int dia, int mes, int ano) {
    printf("%d de ", dia);

    switch (mes) {
        case 1:
            printf("janeiro");
            break;
        case 2:
            printf("fevereiro");
            break;
        case 3:
            printf("março");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
            break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;
    }

    printf(" de %d", ano);
}
