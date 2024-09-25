/*BIBLIOTECAS/LIBRARIES:*/
#include <stdio.h>
#include <stdlib.h>


/*ASSINATURA DAS FUNÇÕES/FUNCTION'S SIGNATURE*/
    void tela_principal(void); /* void: Significa que a função não retorna nenhum valor e (void): Indica que a função não recebe nenhum parâmetro.*/
    void menu_informacoes(void);
    void menu_moradores(void);
    void menu_despesas(void);
    void tarefas(void);


/*FUNÇÕES/FUNCTIONS:*/
int main(void){
    tela_principal();
    menu_moradores();
    menu_informacoes();
    menu_despesas();
    tarefas();
    
    return 0;
}

/*FUNÇÕES/FUNCTION*/
void tela_principal(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///      Um sistema de Gestão de Despesas de uma República Estudantil       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = Sistema de Gestão De Despesas = = = =               ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Módulo Moradores                                          ///\n");
    printf("///            2. Módulo Despesas                                           ///\n");
    printf("///            3. Módulo Tarefas diárias                                    ///\n");
    printf("///            4. Módulo Relatórios                                         ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada: ");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>Tecle <ENTER> para continuar...\n");
    

}

void menu_moradores(){
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            = = = =              SigFinance             = = = =          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = Menu Morador = = = = = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar um novo morador                                  ///\n");
    printf("///            2. Pesquisar os moradores                                    ///\n");
    printf("///            3. Atualizar o cadastro de um morador                        ///\n");
    printf("///            4. Excluir um morador                                        ///\n");
    printf("///            0. Voltar ao menu anterior                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada: ");                                
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");


}

void menu_despesas(void){
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            = = = =              SigFinance             = = = =          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = Menu Despesas = = = = = = = = =            ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar uma despesas                                    ///\n");
    printf("///            2. Pesquisar as despesas                                     ///\n");
    printf("///            3. Atualizar uma despesas                                    ///\n");
    printf("///            4. Excluir uma despesa                                       ///\n");
    printf("///            0. Voltar ao menu anterior                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada: ");                               
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");


}


void tarefas(void){
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            = = = =              SigFinance             = = = =          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = Menu Tarefas = = = = = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar uma tarefa                                      ///\n");
    printf("///            2. Pesquisar as tarefas                                      ///\n");
    printf("///            3. Atualizar uma tarefa                                      ///\n");
    printf("///            4. Excluir uma tarefa                                        ///\n");
    printf("///            0. Voltar ao menu anterior                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada: ");                                
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");


}


void menu_informacoes(void){
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
    printf("///                  - - -       Redes sociais       - - -                  ///\n");
    printf("///   - - - @Tome.arcanjo              e          @nlpsr_          - - -    ///\n");
    printf("///   - - - @tome-arcanjo              e          @coderlupus      - - -    ///\n");
    printf("///   - - - tomearcanjo12@gmail.com    e     nlopesr2006@gmail.com - - -    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");

}