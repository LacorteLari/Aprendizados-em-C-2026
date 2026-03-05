#include <stdio.h>

int main() {
    int senhas_atendimento[5];
    int i;

    // Preencher as senhas
    for(i = 0; i < 5; i++) {
        senhas_atendimento[i] = 101 + i;
    }

    // Mostrar senhas
    printf("Senhas cadastradas:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", senhas_atendimento[i]);
    }
    printf("\n");

    // Endereços de memória
    printf("Endereco da primeira posicao: %p\n", (void*)&senhas_atendimento[0]);
    printf("Endereco da segunda posicao: %p\n", (void*)&senhas_atendimento[1]);

    // Diferença em bytes
    printf("Diferenca em bytes entre primeira e segunda posicao: %ld\n",
           (char*)&senhas_atendimento[1] - (char*)&senhas_atendimento[0]);

    return 0;
}