#include <stdio.h>

 struct Cidadao {
    int id;
    char nome[100];
    int idade;
};
  void imprimirCidadao(struct Cidadao c) {
    printf("ID: %d\n", c.id);
    printf("Nome: %s\n", c.nome);
    printf("Idade: %d\n", c.idade);
}

int main() {
     struct Cidadao cidadao;

  printf("\n---Seja Bem-Vindo (a):---\n");
   printf("\n Digite o ID: ");
    scanf("%d", &cidadao.id);

    printf("Digite o nome: ");
    scanf(" %s[^\n]", cidadao.nome);

    printf("Digite a idade: ");
    scanf("%d", &cidadao.idade);

    imprimirCidadao(cidadao);

}
