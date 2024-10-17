#include <stdio.h>
#include <stdlib.h>
#include "medico.h"

//MEDICOS
void tela_medico(void) {
  int opcao;
  do{
    system("clear||cls");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("***                                                                         ***\n");
    printf("***                 ------ MÉDICOS ------                                   ***\n");
    printf("***                                                                         ***\n");
    printf("***                 1. Cadastrar Médico                                     ***\n");
    printf("***                 2. Pesquisar Médico                                     ***\n");
    printf("***                 3. Atualizar Médico                                     ***\n");
    printf("***                 4. Remover Médico                                       ***\n");
    printf("***                 0. Cancelar e sair                                      ***\n");
    printf("***                                                                         ***\n");
    printf("***                 Escolha a opção desejada: ");
    scanf("%d", &opcao);
    getchar();
    switch (opcao) {
      case 1:
        tela_cadastrar_medico();
        break;
      case 2:
        tela_ver_medico();
        break;
      case 3:
        tela_atualizar_medico();
        break;
      case 4:
        tela_deletar_medico();
        break;
      case 0:
        break;
      default:
      printf("Valor invalido");
      break;
      
    }
  }while(opcao != 0);
}


void tela_cadastrar_medico() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                         CADASTRAR MÉDICO                                ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***          CRE:                                                           ***\n");
  printf("***          Nome:                                                          ***\n");
  printf("***          Especialização:                                                ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
  getchar();
}
void tela_atualizar_medico() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                         ATUALIZAR MÉDICO                              ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***       Informe o CRE do médico que deseja atualizar:                     ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
  getchar();
}
void tela_deletar_medico() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                           DELETAR MÉDICO                                ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***       Informe o CRE do médico que deseja deletar:                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
  getchar();
}
void tela_ver_medico() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                              VER MÉDICO                                 ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***       Informe o CRE do médico que deseja ver informações:               ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
  getchar();
}
