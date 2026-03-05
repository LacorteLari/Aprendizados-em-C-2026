#include <stdio.h>

int main() {

    int id_servidor = 1205;
    float salario = 1200.50;
    char turno = 'M';

    printf("Valor de id_servidor: %d\n", id_servidor);
    printf("Endereco de id_servidor: %p\n\n", &id_servidor);

    printf("Valor do salario: %.2f\n", salario);
    printf("Endereco do salario: %p\n\n", &salario);

    printf("Valor do turno: %c\n", turno);
    printf("Endereco do turno: %p\n", &turno);

    return 0;
}