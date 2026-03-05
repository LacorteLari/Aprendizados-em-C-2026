#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main() {
    int *protocolo_urgente;
     setlocale(LC_ALL, "portuguese");

    
    protocolo_urgente = (int*) malloc(sizeof(int));

  
    if(protocolo_urgente == NULL) {
        printf("Erro na alocacao de memoria!\n");
        //return 1; 
    }

    
    *protocolo_urgente = 999;

    
    printf("Protocolo urgente: %d\n", *protocolo_urgente);

    free(protocolo_urgente);

    return 0;
}