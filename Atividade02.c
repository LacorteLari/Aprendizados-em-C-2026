#include <stdio.h>

struct Processo {
    int numeroProtocolo;
    int status; 
};


void atualizarStatus(struct Processo *p, int novoStatus) {
    p->status = novoStatus;
}

int main() {

    struct Processo proc;

    proc.numeroProtocolo = 231;
    proc.status = 0;

    printf("Status antes: %d\n", proc.status);

    atualizarStatus(&proc, 1);

    printf("Status atualizado com sucesso: %d\n", proc.status);

    return 0;
}