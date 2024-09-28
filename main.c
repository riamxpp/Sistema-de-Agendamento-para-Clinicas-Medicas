#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void tela_menu_principal(void);
void tela_sobre(void);
void tela_informacoes(void);
void tela_sobre_projeto(void);

int main() {
  tela_sobre();
  tela_menu_principal();
  tela_informacoes();
  tela_sobre_projeto();

  tela_paciente();
  tela_cadastrar_paciente();
  tela_atualizar_paciente();
  tela_deletar_paciente();
  tela_ver_paciente();

  tela_agendamento();
  tela_cadastrar_agendamento();
  tela_atualizar_agendamento();
  tela_deletar_agendamento();
  tela_ver_agendamento();
  
  tela_medico();
  tela_cadastrar_medico();
  tela_atualizar_medico();
  tela_deletar_medico();
  tela_ver_medico();
  
  tela_procedimentos();
  tela_cadastrar_procedimento();
  tela_atualizar_procedimento();
  tela_deletar_procedimento();
  tela_ver_procedimento();
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
  printf("***             Sistema de Agendamento para Clinicas Medicas                ***\n");
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

void tela_informacoes(void) {
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***           ------ INFORMAÇÕES SOBRE OS DESENVOLVEDORES -----             ***\n");
  printf("***       Riam Stefesom                           Gean Macedo               ***\n");
  printf("***       23 anos                                 22 anos                   ***\n");
  printf("***       Estudante                               Estudante                 ***\n");
  printf("***       Caicó - RN                              Caicó - RN                ***\n");
  printf("***       github.com/riamxpp                      github.com/jGean09        ***\n");
  printf("***                                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}

void tela_sobre_projeto(void){
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                               SIG-Clinic                                ***\n");
  printf("***             Sistema de Agendamento para Clinicas Medicas                ***\n");
  printf("***                  Disciplina DCT1106 -- Programação                      ***\n");
  printf("***             Developed by @riamxpp and @jGean09 - 09/2024                ***\n");
  printf("***                                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("***                              Objetivo:                                  ***\n");
  printf("***       Este sistema tem como objetivo facilitar o agendamento de         ***\n");
  printf("***    consultas em clinicas medicas, permitindo que pacientes marquem      ***\n");
  printf("***    suas consultas de forma mais eficiente e que as clinicas gerenciem   ***\n");
  printf("***    seus horarios de atendimento.                                        ***\n");
  printf("***                                                                         ***\n");
  printf("***                          Tecnologia Utilizadas:                         ***\n");
  printf("***                      - Linguagem de Programacao C                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}


