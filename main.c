#include <stdio.h>
#include <stdlib.h>

void tela_menu_principal(void);
void tela_sobre(void);
void tela_informacoes(void);
void tela_sobre_projeto(void);

// MÉDICO
void tela_medico(void);
void tela_cadastrar_medico();
void tela_atualizar_medico();
void tela_deletar_medico();
void tela_ver_medico();
// PACIENTE
void tela_paciente();
void tela_cadastrar_paciente();
void tela_atualizar_paciente();
void tela_deletar_paciente();
void tela_ver_paciente();
// AGENDAMENTO
void tela_agendamento(void);
void tela_cadastrar_agendamento();
void tela_atualizar_agendamento();
void tela_deletar_agendamento();
void tela_ver_agendamento();
// PROCEDIMENTOS
void tela_procedimentos(void);
void tela_cadastrar_procedimento();
void tela_atualizar_procedimento();
void tela_deletar_procedimento();
void tela_ver_procedimento();

int main() {
  tela_cadastrar_paciente();
  tela_atualizar_paciente();
  tela_deletar_paciente();
  tela_ver_paciente();

  tela_cadastrar_agendamento();
  tela_atualizar_agendamento();
  tela_deletar_agendamento();
  tela_ver_agendamento();
  
  tela_cadastrar_medico();
  tela_atualizar_medico();
  tela_deletar_medico();
  tela_ver_medico();
  
  
  tela_cadastrar_procedimento();
  tela_atualizar_procedimento();
  tela_deletar_procedimento();
  tela_ver_procedimento();

  tela_menu_principal();
  int opcao;
  
  scanf("%d", &opcao);
  switch (opcao) {
    case 1:
      tela_paciente();
      break;
    case 2:
      tela_medico();
      break;
    case 3:
      tela_procedimentos();
      break;
    case 4:
      tela_agendamento();
      break;
    case 5:
      tela_informacoes();
      break;
    case 6:
      tela_sobre();
      break;
  }
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
  printf("***                 6. Módulo Informações                                   ***\n");
  printf("***                 7. Módulo Sobre                                         ***\n");
  printf("***                 0. Sair                                                 ***\n");
  printf("***                                                                         ***\n");
  printf("***                 Escolha a opção desejada: ");
  // printf("***                                                                         ***\n");
  // printf("*******************************************************************************\n");
  // printf("\n");
  // printf("Pressione a tecla <ENTER> para continuar...\n");
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

//MEDICOS
void tela_medico(void) {
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
  printf("***                 Escolha a opção desejada:                               ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}

void tela_cadastrar_medico() {
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
}
void tela_atualizar_medico() {
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
}
void tela_deletar_medico() {
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
}
void tela_ver_medico() {
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
}

//PACIENTE
void tela_paciente() {
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


void tela_cadastrar_paciente() {
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                         CADASTRAR PACIENTE                              ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***          Nome:                                                          ***\n");
  printf("***          CPF:                                                           ***\n");
  printf("***          Data de nascimento:                                            ***\n");
  printf("***          Celular:                                                       ***\n");
  printf("***          Email:                                                         ***\n");
  printf("***          Endereço:                                                      ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}

void tela_atualizar_paciente() {
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                         ATUALIZAR PACIENTE                              ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***       Informe o CPF do paciente que deseja atualizar:                   ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}

void tela_deletar_paciente() {
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                           DELETAR PACIENTE                              ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***       Informe o CPF do paciente que deseja deletar:                     ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}

void tela_ver_paciente() {
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                              VER PACIENTE                              ***\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***       Informe o CPF do paciente que deseja ver informações:             ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}

// AGENDAMENTO
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

void tela_cadastrar_agendamento() {
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
}

void tela_atualizar_agendamento() {
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
}

void tela_deletar_agendamento() {
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
}

void tela_ver_agendamento() {
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
}

//PROCEDIMENTO
void tela_procedimentos(void) {
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
  printf("***                 Escolha a opção desejada:                               ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("Pressione a tecla <ENTER> para continuar...\n");
}
void tela_cadastrar_procedimento() {
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
}
void tela_atualizar_procedimento() {
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
}
void tela_deletar_procedimento() {
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
}
void tela_ver_procedimento() {
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
}