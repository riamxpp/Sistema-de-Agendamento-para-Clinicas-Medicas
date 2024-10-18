#include <stdio.h>
#include <stdlib.h>
#include "agendamento.h"

void tela_agendamento(void) {
  int opcao;
  do {
    system("clear||cls");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("***                                                                         ***\n");
    printf("***                 ------ AGENDAMENTO ------                               ***\n");
    printf("***                                                                         ***\n");
    printf("***                 1. Cadastrar Agendamento                                ***\n");
    printf("***                 2. Pesquisar Agendamento                                ***\n");
    printf("***                 3. Atualizar Agendamento                                ***\n");
    printf("***                 4. Remover Agendamento                                  ***\n");
    printf("***                 0. Cancelar e sair                                      ***\n");
    printf("***                                                                         ***\n");
    printf("***                 Escolha a opção desejada: ");

    
    scanf("%d", &opcao);
    getchar();
    switch (opcao) {
      case 1:
        tela_cadastrar_agendamento();
        break;
      case 2:
        tela_ver_agendamento();
        break;
      case 3:
        tela_atualizar_agendamento();
        break;
      case 4:
        tela_deletar_agendamento();
        break;
      default:
        printf("Valor invalido");
        break;
    }
  } while(opcao != 0);
}

void tela_cadastrar_agendamento() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                         CADASTRAR AGENDAMENTO                           ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***          Data:                                                          ***\n");
  printf("***          Hora:                                                          ***\n");
  printf("***          ID do agendamento:                                             ***\n");
  printf("***          CPF paciente:                                                  ***\n");
  printf("***          CRE do médico:                                                 ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
  getchar();
}

void tela_atualizar_agendamento() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                         ATUALIZAR AGENDAMENTO                           ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***       Informe o ID do agendamento                                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
  getchar();
}

void tela_deletar_agendamento() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                           DELETAR AGENDAMENTO                           ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***       Informe o ID do agendamento:                                      ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
  getchar();
}

void tela_ver_agendamento() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                              VER AGENDAMENTO                            ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***       Innforme o ID do agendamento:                                     ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
  getchar();
}