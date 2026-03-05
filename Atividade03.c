#include <stdio.h>
#include<locale.h>

struct GuiaArrecadacao {
    int numero_documento;
    float valor;
    char status; // P = Pago  A = Aberto
};

int main() {
setlocale(LC_ALL, "portuguese");
    struct GuiaArrecadacao guias[3];
    int i;

    
    for(i = 0; i < 3; i++) {

       printf("\n--- Guia %d ---\n", i + 1);

        printf("Numero do documento: ");
        scanf("%d", &guias[i].numero_documento);

        printf("Valor: ");
        scanf("%f", &guias[i].valor);

        printf("Status (P = Pago / A = Aberto): ");
        scanf(" %c", &guias[i].status);
    }

    printf("\n--- Relatorio do lote processado ---\n");

    for(i = 0; i < 3; i++) {

       printf("\nGuia n %d\n", i + 1);
        printf("Numero do documento: %d\n", guias[i].numero_documento);
        printf("Valor: %.2f\n", guias[i].valor);
        printf("Status: %c\n", guias[i].status);
    }

    return 0;
}