#include <stdio.h>
#include <stdlib.h>
#include "paciente.h"
#include "medico.h"

void tela_menu_principal(void);
void tela_sobre(void);
void tela_informacoes(void);
void tela_sobre_projeto(void);


// RELATORIO
void tela_relatorio(void);
void tela_relatorio_medico(void);
void tela_relatorio_paciente(void);
void tela_relatorio_procedimento(void);
void tela_relatorio_agendamento(void);


// AGENDAMENTO
void tela_agendamento(void);
void tela_cadastrar_agendamento(void);
void tela_atualizar_agendamento(void);
void tela_deletar_agendamento(void);
void tela_ver_agendamento(void);
// PROCEDIMENTOS
void tela_procedimentos(void);
void tela_cadastrar_procedimento(void);
void tela_atualizar_procedimento(void);
void tela_deletar_procedimento(void);
void tela_ver_procedimento(void);

int main(void) {  
  int opcao;
  do{
    tela_menu_principal();
    scanf("%d", &opcao);
    getchar();
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
        tela_relatorio();
        break;
      case 6:
        tela_informacoes();
        break;
      case 7:
        tela_sobre();
        break;
      case 0:
      break;
      default:
      printf("Valor invalido");
      break;
    }
  }while(opcao != 0);
  return 0;
}

void tela_sobre(void) {
  system("clear||cls");
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
  printf("Pressione a tecla <ENTER> para sair...\n");
  getchar();
}

void tela_menu_principal(void) { 
  system("clear||cls");
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
}

void tela_informacoes(void) {
  system("clear||cls");
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
  printf("Pressione a tecla <ENTER> para sair...\n");
  getchar();
}
void tela_relatorio(void){
  int opcao;
  do{
    system("clear||cls");
    printf("\n");
    printf("*******************************************************************************\n");
    printf("***                                                                         ***\n");
    printf("***                         Relátorio Geral                                 ***\n");
    printf("***                                                                         ***\n");
    printf("***                 1. Relátorio Módulo Paciente                            ***\n");
    printf("***                 2. Relátorio Módulo Médico                              ***\n");
    printf("***                 3. Relátorio Módulo Procedimento                        ***\n");
    printf("***                 4. Relátorio Módulo Agendamento                         ***\n");                   
    printf("***                 0. Sair                                                 ***\n");
    printf("***                                                                         ***\n");
    printf("***                 Escolha a opção desejada: ");
    scanf("%d",&opcao);
    getchar();
    switch (opcao)
    {
    case 1:
      tela_relatorio_paciente();
      break;
    case 2:
      tela_relatorio_medico();
      break;
    case 3:
      tela_relatorio_procedimento();
      break;
    case 4:
      tela_relatorio_agendamento();
      break;
    case 0:
      break;
    default:
      break;
    }
  }while(opcao != 0);
}
void tela_relatorio_medico() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                         RELATORIO MÉDICO                                ***\n");
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
void tela_relatorio_paciente() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                         RELATORIO PACIENTE                              ***\n");
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
  getchar();
}
void tela_relatorio_procedimento() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                         RELATORIO PROCEDIMENTO                          ***\n");
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
void tela_relatorio_agendamento() {
  system("clear||cls");
  printf("\n");
  printf("*******************************************************************************\n");
  printf("***                         RELATORIO AGENDAMENTO                           ***\n");
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

// AGENDAMENTO
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

//PROCEDIMENTO
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