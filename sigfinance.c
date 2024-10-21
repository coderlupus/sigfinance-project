/*BIBLIOTECAS:*/
#include <stdio.h>
#include <stdlib.h>
#include "moradores.h"
#include "despesas.h"
#include "tarefas.h"

/*ASSINATURA DAS FUNÇÕES/FUNCTION'S SIGNATURE*/
void tela_principal(void); /* void: Significa que a função não retorna nenhum valor e (void): Indica que a função não recebe nenhum parâmetro.*/

void menu_relatorios(void);
void menu_informacoes(void);

void relatorios_morador(void);
void relatorios_despesa(void);
void relatorios_tarefa(void);

/*FUNÇÃO MAIN/MAIN FUNCTION:*/
int main(void)
{
    tela_principal();
    return 0;
}

/*FUNÇÕES/FUNCTIONS*/
void tela_principal(void){
    int opcao;
    do{
        system("clear||cls");
        printf("\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                         ///\n");
        printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
        printf("///      Um sistema de Gestão de Despesas de uma República Estudantil        ///\n");
        printf("///                                                                         ///\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                         ///\n");
        printf("///             = = = = Sistema de Gestão De Despesas = = = =               ///\n");
        printf("///                                                                         ///\n");
        printf("///            1. Módulo Moradores                                          ///\n");
        printf("///            2. Módulo Despesas                                           ///\n");
        printf("///            3. Módulo Tarefas diárias                                    ///\n");
        printf("///            4. Módulo Relatórios                                         ///\n");
        printf("///            5. Módulo Informações                                        ///\n");
        printf("///            0. Sair                                                      ///\n");
        printf("///                                                                         ///\n");
        printf("///            Escolha a opção desejada: ");
        scanf("%d", &opcao);
        getchar();
        
        switch (opcao){
        case 1:
            menu_moradores();
            break;
        case 2:
            menu_despesas();
            break;
        case 3:
            menu_tarefas();
            break;
        case 4:
            menu_relatorios();
            break;
        case 5:
            menu_informacoes();
            break;
        case 0:
            printf("Saindo do sistema...\n");
            break;
        default:
            printf("\t\t\t>Opção inválida! Tente novamente.\n");
            printf("///                                                                         ///\n");
            printf("///////////////////////////////////////////////////////////////////////////////\n");
            printf("\n");
            printf("\t\t\t>Tecle <ENTER> para continuar...\n");
            getchar();
        }
    } while (opcao != 0);
}

void menu_tarefas(){
    int opcao;
    do{   
        system("clear||cls");
        printf("\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("///            = = = = = = = = = Menu Tarefas = = = = = = = = =             ///\n");
        printf("///                                                                         ///\n");
        printf("///            1. Cadastrar uma tarefa                                      ///\n");
        printf("///            2. Pesquisar as tarefas                                      ///\n");
        printf("///            3. Atualizar tarefas                                         ///\n");
        printf("///            4. Excluir uma tarefa                                        ///\n");
        printf("///            0. Voltar ao menu anterior                                   ///\n");
        printf("///                                                                         ///\n");
        printf("///            Escolha a opção desejada: ");
        scanf("%d", &opcao);
        getchar();
        switch (opcao)
        {
        case 1:
            cadastrar_tarefa();
            break;
        case 2:
            pesquisar_tarefa();
            break;
        case 3:
            atualizar_tarefa();
            break;
        case 4:
            excluir_tarefa();
            break;
         case 0:
        
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            printf("\t\t\t>Opção inválida! Tente novamente.\n");
            printf("///                                                                         ///\n");
            printf("///////////////////////////////////////////////////////////////////////////////\n");
            printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            break;
        }
    } while (opcao != 0);
}

void cadastrar_tarefa()
{
    char descricao[100];
    char prazo[20];
    char id[5];

    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Cadastrar Tarefa = = = = = = = = = = = = = = = =    ///\n");
    printf("///                                                                         ///\n");
    printf("/// ID da tarefa:                                                           ///\n");
    fgets(id, sizeof(id), stdin);
    printf("/// Descrição da tarefa:                                                    ///\n");
    fgets(descricao, sizeof(descricao), stdin);
    printf("/// Prazo da tarefa (dd/mm/aaaa):                                           ///\n");
    fgets(prazo, sizeof(prazo), stdin);
    getchar();  // Aguarda o usuário pressionar Enter
}

void pesquisar_tarefa()
{
    char id[5];

    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Pesquisar Tarefa = = = = = = = = = = = = = = = =    ///\n");
    printf("///                                                                         ///\n");
    printf("/// Informe o ID da tarefa:                                                 ///\n");
    fgets(id, sizeof(id), stdin);
    getchar();  // Aguarda o usuário pressionar Enter
}

void atualizar_tarefa()
{
    char id[5];
    char nova_descricao[100];
    char novo_prazo[20];

    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Atualizar Tarefa = = = = = = = = = = = = = = = =    ///\n");
    printf("///                                                                         ///\n");
    printf("/// Informe o ID da tarefa que deseja atualizar:                            ///\n");
    fgets(id, sizeof(id), stdin);
    printf("/// Nova descrição:                                                         ///\n");
    fgets(nova_descricao, sizeof(nova_descricao), stdin);
    printf("/// Novo prazo (dd/mm/aaaa):                                                ///\n");
    fgets(novo_prazo, sizeof(novo_prazo), stdin);
    getchar();  // Aguarda o usuário pressionar Enter
}

void excluir_tarefa()
{
    char id[5];

    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Excluir Tarefa = = = = = = = = = = = = = = = =      ///\n");
    printf("///                                                                         ///\n");
    printf("/// Informe o ID da tarefa que deseja excluir:                              ///\n");
    fgets(id, sizeof(id), stdin);
    getchar();  // Aguarda o usuário pressionar Enter
}

void menu_relatorios(void){
     int opcao;
     do{
        system("clear||cls");
        printf("\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("///            = = = = = = = = = Menu Relatórios = = = = = = = = =          ///\n");
        printf("///                                                                         ///\n");
        printf("///            1. Relatórios de moradores                                   ///\n");
        printf("///            2. Relatórios de despesas                                    ///\n");
        printf("///            3. Relatórios de tarefas                                     ///\n");
        printf("///            0. Retornar ao menu principal                                ///\n");
        printf("///                                                                         ///\n");
        printf("///            Escolha a opção desejada: ");
        scanf("%d", &opcao);
        getchar();
        switch (opcao)
        {
        case 1:
            relatorios_morador();
            break;
        case 2:
            relatorios_despesa();
            break;
        case 3:
            relatorios_tarefa();
            break;
        case 0:
        
            break;
        default:
            printf("\t\t\t>Opção inválida! Tente novamente.\n");
            printf("///                                                                         ///\n");
            printf("///////////////////////////////////////////////////////////////////////////////\n");
            printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            break;
        }
        
    } while (opcao != 0);
}

void relatorios_morador(void)
{
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Relatório de Moradores = = = = = = = = = = = = =   ///\n");
    // Implementar a geração do relatório
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

void relatorios_despesa(void)
{
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Relatório de Despesas = = = = = = = = = = = = =    ///\n");
    // Implementar a geração do relatório
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

void relatorios_tarefa(void)
{
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Relatório de Tarefas = = = = = = = = = = = = =     ///\n");
    // Implementar a geração do relatório
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}


void menu_informacoes(void)
{
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///      Um sistema de Gestão de Despesas de uma República Estudantil       ///\n");
    printf("///Esse programa tem o intuito de facilitar o manejamento das despesas para ///\n");
    printf("///um grupo de moradores de uma república de estudantes, incluindo 3 módulos///\n");
    printf("///principais: Moradores, Despesas e Tarefas Diárias. Esses módulos permitem///\n");
    printf("///a fácil administração das responsabilidades de cada morador da república.///\n");
    printf("///                  - - - Equipe de desenvolvimento - - -                  ///\n");
    printf("///   - - - Tomé Galileu Oliveira Arcanjo e Nathan Lopes Rodrigues - - -    ///\n");
    printf("///                  - - -         Instagram      - - -                     ///\n");
    printf("///   - - - @Tome.arcanjo              e          @nlpsr_          - - -    ///\n");
    printf("///                  - - -           Github       - - -                     ///\n");
    printf("///   - - - @tome-arcanjo              e          @coderlupus      - - -    ///\n");
    printf("///                  - - -           E-mail       - - -                     ///\n");
    printf("///   - - - tomearcanjo12@gmail.com    e     nlopesr2006@gmail.com - - -    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");

    printf("\n\t\t\t>>> Tecle <ENTER> para voltar ao menu principal...\n");
    getchar();        // Espera o usuário apertar "Enter"
    // tela_principal(); // Volta ao menu principal
}
