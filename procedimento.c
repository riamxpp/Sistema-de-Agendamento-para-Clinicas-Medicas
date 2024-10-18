#include <stdio.h>
#include <stdlib.h>
#include "procedimento.h"

void tela_procedimentos(void) {
  int opcao;

  do {
    system("clear||cls");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("***                                                                         ***\n");
    printf("***                 ------ PROCEDIMENTOS ------                             ***\n");
    printf("***                                                                         ***\n");
    printf("***                 1. Cadastrar Procedimento                               ***\n");
    printf("***                 2. Pesquisar Procedimento                               ***\n");
    printf("***                 3. Atualizar Procedimento                               ***\n");
    printf("***                 4. Remover Procedimento                                 ***\n");
    printf("***                 0. Cancelar e sair                                      ***\n");
    printf("***                                                                         ***\n");
    printf("***                 Escolha a opção desejada: ");

    scanf("%d", &opcao);
    getchar();
    switch (opcao) {
      case 1:
        tela_cadastrar_procedimento();
        break;
      case 2:
        tela_ver_procedimento();
        break;
      case 3:
        tela_atualizar_procedimento();
        break;
      case 4:
        tela_deletar_procedimento();
        break;
      default:
        printf("Valor invalido");
        break;
    }
  } while(opcao != 0);

}

void tela_cadastrar_procedimento() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                         CADASTRAR PROCEDIMENTO                          ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***          ID Procedimento:                                               ***\n");
  printf("***          Nome:                                                          ***\n");
  printf("***          Duração:                                                       ***\n");
  printf("***          CRE:                                                           ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
  getchar();
}
void tela_atualizar_procedimento() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                         ATUALIZAR PROCEDIMENTO                          ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***       Informe o ID do procedimento que deseja atualizar:                ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
  getchar();
}
void tela_deletar_procedimento() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                           DELETAR PROCEDIMENTO                          ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***       Informe o ID do procedimento que deseja deletar:                  ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
  getchar();
}
void tela_ver_procedimento() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                              VER PROCEDIMENTO                           ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***       Informe o ID do procedimento que deseja ver informações:          ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
  getchar();
}
