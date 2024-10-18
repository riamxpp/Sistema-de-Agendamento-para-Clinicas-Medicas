# :stethoscope: SIG-Clinic :stethoscope:
## Sistema-de-Agendamento-para-Clinicas-Medicas :syringe:
**SIG-Clinic** é um sistema de agendamento desenvolvido para clínicas médicas, com o objetivo de facilitar a gestão de consultas e otimizar a organização dos horários.

---

## Descrição 📋

O **SIG-Clinic** é uma solução de agendamento desenvolvida como parte da disciplina de Programação (DCT1106) da UFRN. Este projeto oferece uma interface intuitiva para o gerenciamento de consultas médicas, incluindo funcionalidades para cadastro de pacientes, agendamento de consultas e gestão de médicos.

---

## Funcionalidades 🛠️

- **Cadastro de Pacientes**: Adicionar, editar, visualizar e excluir informações dos pacientes.
- **Agendamento de Consultas**: Agendar, visualizar, editar e cancelar consultas.
- **Gestão de Médicos**: Adicionar, editar, visualizar e excluir médicos e suas especialidades.
- **Relatórios**: Gerar e visualizar relatórios detalhados de consultas e pacientes.

---

## Tecnologias Utilizadas 🔧

- **Linguagem**: C
- **Compilador**: GCC
- **Sistema Operacional**: Linux
- **IDE**: Visual Studio Code

---

## Instruções de Compilação ⚙️

1. Clone o repositório:
   ```sh
   git clone https://github.com/riamxpp/Sistema-de-Agendamento-para-Clinicas-Medicas.git
2. Navegue até o diretório do projeto:
   ```sh
   cd Sistema-de-Agendamento-para-Clinicas-Medicas
3. Crie os arquivos .o de todos os módulos:
   ```sh
   gcc -Wall -c agendamento.c informacoes.c main.c medico.c paciente.c procedimento.c relatorio.c
4. Crie o executável com todos os módulos:
   ```sh
   gcc -o Sitema_Agendamento_Clinica_Medicas paciente.o main.o medico.o procedimento.o agendamento.o informacoes.o relatorio.o
5. Execute o executável:
   ```sh
   ./Sitema_Agendamento_Clinica_Medicas

---

## Semana Atual 🚀

**Semana 4** - Progresso conforme as atividades planejadas para esta semana, seguindo as entregas e objetivos estabelecidos.

---

## Contato 📧

Para mais informações, entre em contato com os desenvolvedores:

- @riamxpp - [GitHub](https://github.com/riamxpp)
- @jGean09 - [GitHub](https://github.com/jGean09) 


