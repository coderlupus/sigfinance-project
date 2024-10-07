/*BIBLIOTECAS/LIBRARIES:*/
#include <stdio.h>
#include <stdlib.h>


/*ASSINATURA DAS FUNÇÕES/FUNCTION'S SIGNATURE*/
    void tela_principal(void); /* void: Significa que a função não retorna nenhum valor e (void): Indica que a função não recebe nenhum parâmetro.*/
    void menu_informacoes(void);
    void menu_moradores(void);
    void menu_despesas(void);
    void tarefas(void);
    void cadastrar_morador(void);
    void pesquisar_morador(void);
    void cadastrar_tarefa(void);
    void cadastrar_despesa(void);
    void atualizar_morador(void);
    void excluir_morador(void);


/*FUNÇÃO MAIN/MAIN FUNCTION:*/
int main(void){
    tela_principal();
    return 0;
}

/*FUNÇÕES/FUNCTION*/
void tela_principal(void) {
    int opcao;
    system("clear||cls");
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
    scanf("%d",&opcao);
    getchar();
    switch(opcao) {
        case 1:
            menu_moradores(); 
            break; /*Termina o bloco case. Isso impede que os outros casos sejam executados depois de executar este.*/
        case 2:
            menu_despesas(); 
            break;
        case 3:
            tarefas();
            break;
        case 4:
            /*falta add o de relatorios*/
            break;
        case 0:
            printf("Saindo do sistema...\n");
            break;
        default: /*Se nenhum dos valores anteriores (1, 2, 3, 4 ou 0) for selecionado, este bloco é executado.*/
            printf("Opção inválida! Tente novamente.\n");
            tela_principal();
            break;
    }
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>Tecle <ENTER> para continuar...\n");
    

}

void menu_moradores(){
    system("clear||cls");
    int opcao;
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
    printf("///            1. Cadastrar um novo morador                                 ///\n");
    printf("///            2. Pesquisar os moradores                                    ///\n");
    printf("///            3. Atualizar o cadastro de um morador                        ///\n");
    printf("///            4. Excluir um morador                                        ///\n");
    printf("///            0. Voltar ao menu anterior                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada: ");       
    scanf("%d",&opcao);    
    getchar();             
    switch(opcao) {
        case 1:
            cadastrar_morador();
            break; /*Termina o bloco case. Isso impede que os outros casos sejam executados depois de executar este.*/
        case 2:
            pesquisar_morador();
            break;
        case 3:
            atualizar_morador(); 
            break;
        case 4:
            excluir_morador(); 
            break;
        case 0:
            tela_principal();
            break;
        default: /*Se nenhum dos valores anteriores (1, 2, 3, 4 ou 0) for selecionado, este bloco é executado.*/
            printf("Opção inválida! Tente novamente.\n");
            tela_principal();
            break;
    }
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");

}


void cadastrar_morador() {
    /* Declaração de variáveis para armazenar os dados do morador */
    char nome[50];   
    char idade[5];       
    char email[50];
    char tel[17];
    char cpf[13];  

    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Cadastrar Novo Morador = = = = = = = = = = = = =   ///\n");
    printf("///                                                                         ///\n");
    printf("/// Informe os dados do morador:                                            ///\n");
    printf("///            Nome: ");
    fgets(nome, sizeof(nome), stdin); /* Lê uma linha do stdin, incluindo espaços */
    printf("///            Idade: ");
    fgets(idade, sizeof(nome), stdin);
    getchar();              /* Limpa o buffer do teclado para evitar problemas com fgets */
    printf("///            E-mail:  ");
    fgets(email, sizeof(email), stdin); /* Lê uma linha do stdin para o e-mail */
    printf("///            Telefone:");
    fgets(tel, sizeof(tel), stdin);
    printf("///            CPF:     ");
    fgets(cpf, sizeof(cpf), stdin);
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            Morador cadastrado com sucesso!                              ///\n");
    printf("///            Nome: %s", nome);  
    printf("///            Idade: %s\n", idade); 
    printf("///            E-mail: %s", email);
    printf("///            Tel:    %s", tel);
    printf("///            CPF:    %s", cpf); 
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

void pesquisar_morador(){
    char cpf[13];
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");/* terminar funçao após resgate de arquivos*/
    printf("///            = = = = = Pesquisar Morador 		= = = = = = = = = = = = =   ///\n");
    printf("///                                                                         ///\n");
    printf("/// Informe o CPF do morador:                                               ///\n");
    fgets(cpf, sizeof(cpf), stdin);
    getchar();    
	
}

void atualizar_morador(){
    char cpf[13];
    char nome[50];
    char email[50];
    char tel[17];
    char idade[5];
	
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");/* terminar funçao após resgate de arquivos*/
    printf("///            = = = = = Atualizar morador		= = = = = = = = = = = = = ///\n");
    printf("///                                                                         ///\n");
    printf("/// Informe o CPF do morador:                                               ///\n");
    fgets(cpf, sizeof(cpf), stdin);
    /* adicionar funçao de troca de dados*/
}

void excluir_morador(){
    char cpf[13];
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");/* terminar funçao após resgate de arquivos*/
    printf("///            = = = = = Excluir morador  = = = = = = = = = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("/// Informe o CPF do morador:                                               ///\n");
    fgets(cpf, sizeof(cpf), stdin);
     /* adicionar exclusao após salvamento de arquivos simples*/
}

void menu_despesas(void){
    system("clear||cls");
    int opcao;
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
    printf("///            1. Cadastrar uma despesa                                     ///\n");
    printf("///            2. Pesquisar as despesas                                     ///\n");
    printf("///            3. Atualizar despesas                                        ///\n");
    printf("///            4. Excluir uma despesa                                       ///\n");
    printf("///            0. Voltar ao menu anterior                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada: ");
    scanf("%d",&opcao);
    getchar();       
    switch (opcao) {
        case 1:
            printf("Cadastrar Despesas.\n");
            break;
        case 2:
            printf("Pesquisar Despesas.\n");
            break;
        case 3:
            printf("Atualizar Despesas.\n");
            break;
        case 4:
            printf("Excluir Despesas.\n");
            break;
        case 0:
            tela_principal();
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            menu_despesas();
    }                        
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");


}


void cadastrar_despesa() {
    char descricao[200];
    char valor[10];
    char data[12];

    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Cadastrar Nova Despesa = = = = = = = = = = = = = = ///\n");
    printf("///                                                                         ///\n");
    printf("/// Informe os dados da despesa:                                            ///\n");
    printf("///            Descrição: ");
    fgets(descricao, sizeof(descricao), stdin);
    printf("///            Valor: ");
    fgets(valor, sizeof(valor), stdin);
    printf("///            Data (dd/mm/aaaa): ");
    fgets(data, sizeof(data), stdin);
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            Despesa cadastrada com sucesso!                              ///\n");
    printf("///            Descrição: %s", descricao);  
    printf("///            Valor: %s\n", valor); 
    printf("///            Data: %s", data); 
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}
void pesquisar_despesa() {
    char id[5];
	
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Pesquisar Despesa      = = = = = = = = = = = = = = ///\n");
    printf("///                                                                         ///\n");
    printf("/// Informe o id da despesa:                                                ///\n");
    fgets(id, sizeof(id), stdin);
  
	
}

void atualizar_despesa() {
    char id[5];
    char descricao[200];
    char valor[10];
    char data[12];
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Atualizar Despesa      = = = = = = = = = = = = = = ///\n");
    printf("///                                                                         ///\n");
    printf("/// Informe o id da despesa:                                                ///\n");
    fgets(id, sizeof(id), stdin);
	
}

void excluir_despesa() {
    char id[5];
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Excluir Despesa        = = = = = = = = = = = = = = ///\n");
    printf("///                                                                         ///\n");
    printf("/// Informe o id da despesa:                                                ///\n");
    fgets(id, sizeof(id), stdin);
	/* add funcao de excluir apos salvamento de arquivos*/
}



void tarefas(void){
    system("clear||cls");
    int opcao;
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
    scanf("%d",&opcao);
    getchar();                                
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");


}

void cadastrar_tarefa() {
    char descricao[100];
    char data_inicio[12];
    char data_fim[12];

    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("///            = = = = = Cadastrar Nova Tarefa = = = = = = = = = = = = = = =///\n");
    printf("///                                                                         ///\n");
    printf("/// Informe os dados da tarefa:                                             ///\n");
    printf("///            Descrição: ");
    fgets(descricao, sizeof(descricao), stdin);
    printf("///            Data de início (dd/mm/aaaa): ");
    fgets(data_inicio, sizeof(data_inicio), stdin);
    printf("///            Data de término (dd/mm/aaaa): ");
    fgets(data_fim, sizeof(data_fim), stdin);
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            Tarefa cadastrada com sucesso!                               ///\n");
    printf("///            Descrição: %s", descricao);  
    printf("///            Data de início: %s", data_inicio); 
    printf("///            Data de término: %s", data_fim); 
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
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
    printf("///                  - - -         Instagram       - - -                    ///\n");
    printf("///   - - - @Tome.arcanjo              e          @nlpsr_          - - -    ///\n");
    printf("///                  - - -           Github       - - -                     ///\n");
    printf("///   - - - @tome-arcanjo              e          @coderlupus      - - -    ///\n");
    printf("///                  - - -           E-mail       - - -                     ///\n");
    printf("///   - - - tomearcanjo12@gmail.com    e     nlopesr2006@gmail.com - - -    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    
    printf("\n\t\t\t>>> Tecle <ENTER> para voltar ao menu principal...\n");
    getchar();  // Espera o usuário apertar "Enter"
    tela_principal();  // Volta ao menu principal
}
