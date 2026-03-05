#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int qtd, i;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd);

 
    int *matriculas = (int*) malloc(qtd * sizeof(int));

    if (matriculas == NULL) {
        printf("Erro na alocação de memoria! tente novamente\n");
     
    }


    for(i = 0; i < qtd; i++) {
        matriculas[i] = 1000 + i;
    }

    
    printf("Matrículas dos alunos:\n");
    for(i = 0; i < qtd; i++) {
        printf("%d ", matriculas[i]);
    }
    printf("\n");


    free(matriculas);

    return 0;
}