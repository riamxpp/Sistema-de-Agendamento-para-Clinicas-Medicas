#include <stdio.h>
#include <stdlib.h>

void tela_menu_principal(void);
void tela_sobre(void);
void tela_paciente(void);
void tela_agendamento(void);
void tela_informacoes(void);

int main() {
  tela_menu_principal();
  tela_sobre();
  tela_paciente();
  tela_agendamento();
  tela_informacoes();
  return 0;
}

void tela_sobre(void) {
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***             Universidade Federal do Rio Grande do Norte                 ***\n");
  printf("***                 Centro de Ensino Superior do Seridó                     ***\n");
  printf("***                    Curso Sistemas de informações                        ***\n");
  printf("***                  Disciplina DCT1106 -- Programação                      ***\n");
  printf("***                  Projeto Sistema de Gestão Escolar                      ***\n");
  printf("***             Developed by @riamxpp and @jGean09 - 09/2024                ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}

void tela_menu_principal(void) { 
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***            Sistema de Agendamento para Clinicas Medicas                 ***\n");
  printf("***                                                                         ***\n");
  printf("***                 1. Módulo Paciente                                      ***\n");
  printf("***                 2. Módulo Médico                                        ***\n");
  printf("***                 3. Módulo Procedimento                                  ***\n");
  printf("***                 4. Módulo Agendamento                                   ***\n");
  printf("***                 5. Módulo Relatórios                                    ***\n");
  printf("***                 5. Módulo Informações                                   ***\n");
  printf("***                 5. Módulo Sobre                                         ***\n");
  printf("***                 0. Sair                                                 ***\n");
  printf("***                                                                         ***\n");
  printf("***                 Escolha a opção desejada:                               ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}

void tela_paciente(void) {
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                 ------ PACIENTE ------                                  ***\n");
  printf("***                                                                         ***\n");
  printf("***                 1. Cadastrar Paciente                                   ***\n");
  printf("***                 2. Pesquisar Paciente                                   ***\n");
  printf("***                 3. Atualizar Paciente                                   ***\n");
  printf("***                 4. Remover Paciente                                     ***\n");
  printf("***                 0. Cancelar e sair                                      ***\n");
  printf("***                                                                         ***\n");
  printf("***                 Escolha a opção desejada:                               ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}

void tela_agendamento(void) {
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
  printf("***                 Escolha a opção desejada:                               ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}

void tela_informacoes(void) {
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***           ------ INFORMAÇÕES SOBRE OS DESENVOLVEDORES -----             ***\n");
  printf("***       Riam Stefesom                           Gean Macedo               ***\n");
  printf("***       23 anos                                 22 anos                   ***\n");
  printf("***       Estudante                               EStudante                 ***\n");
  printf("***       Caicó - RN                              Caicó - RN                ***\n");
  printf("***       github.com/riamxpp                      github.com/jGean09        ***\n");
  printf("***                                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}