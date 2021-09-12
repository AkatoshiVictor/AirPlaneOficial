#include "Menus.h"

/*N�o funcionar� nas setinhas*/

/*Toda essa parte � gen�rica e � usada em todos os m�todos de menus*/

/*Usadas na fun��o textcolor*/
static int __BACKGROUND = 0;    /*Preto*/
static int __FOREGROUND = 15;   /*Branco*/

void textcolor (int letras, int fundo){

    /*Lembre que o padr�o de cores utilizados � 0=Preto, 15=Branco, 2=Ciano
    Para letras ativas usa o 2, e siga o padr�o de baixo para cada menu*/

    __FOREGROUND = letras;
    __BACKGROUND = fundo;

    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), letras + (__BACKGROUND << 4));
}
/*At� aqui*/

int const Menus::ExibidorDeMenus(){

    /*N�O ALTERAR A EXIBI��O PADR�O DE MENUS, OS
    M�TODOS ADICIONADOS PARA NOVOS MENUS, CHAMAM ESSE
    AO FINAL*/

    int PosicaoMenu = 0;
    string Controle = "";

    while(1){
        system("cls");

        textcolor(4,0);
        cout << MensagemAmigavel[0] << endl << endl;
        textcolor(15,0);

        for(int I=0; I<Exibidor.size(); I++){
            if(I == PosicaoMenu){
                textcolor(2,0); /*2 = Ciano*/
                cout << Exibidor[I] << endl;
                cout << "   [1 Voltar || 2 Entrar]" << endl;
            }
            else{
                textcolor(15,0); /*Voltando ao original*/
                cout << Exibidor[I] << endl;
            }
           
        }

        textcolor(15,0); /*Ao final deve se voltar ao original*/
    
        /*No bloco if-else, s� ser� mudado de acordo com o tamanho, para
        se chegar ao final do menu, regressar ao in�cio*/
        Controle = getch();
        if(Controle == "s"){
            PosicaoMenu++;
            if(PosicaoMenu > Exibidor.size()-1)
                PosicaoMenu = 0;
        }
        else if(Controle == "w"){
            PosicaoMenu--;
            if(PosicaoMenu < 0)
                PosicaoMenu = Exibidor.size()-1;
        }

        /*Bloco padr�o para verifica��o de entrada na op��o, ao final
        da o return da posi��o do menu para utiliza��o do m�todo referente
        aquela posi��o*/

        Controle = getch(); /*Segundo getch() serve para verificar, se foi entrado na op��o*/
        if(Controle == "1")
            return 99;
        else if(Controle == "2")
            return PosicaoMenu;
    }

}

/*Esses s�o os m�todos que devem ser chamados na main*/
    /*Menu geral*/
int const Menus::MenuGeral(){

    string Menu[2] = {"FUNCION�RIO", "CLIENTE"};

    /*Mensagem amig�vel para indicar ao usu�rio em que menu ele est� no momento*/
    MensagemAmigavel.clear();
    MensagemAmigavel.push_back("EMPRESA DE VIAGENS AIRPLANE");

    Exibidor.clear();
    for(int I=0; I<2; /*O .size n�o fucniona*/ I++){
        Exibidor.push_back(Menu[I]);
    }

    return ExibidorDeMenus();
}

int const Menus::Cliente(){

    string Menu[2] = {"ENTRAR", "CADASTRE-SE"};

    MensagemAmigavel.clear();
    MensagemAmigavel.push_back("MENU DE CLIENTE");

    Exibidor.clear();
    for(int I=0; I<2; I++){
        Exibidor.push_back(Menu[I]);
    }

    return ExibidorDeMenus();
}

int const Menus::Funcionario(){

    string Menu[2] = {"ENTRAR", "TENTE UMA VAGA"};

    MensagemAmigavel.clear();
    MensagemAmigavel.push_back("MENU DE FUNCIO�RIO");

    Exibidor.clear();
    for(int I=0; I<2; I++){
        Exibidor.push_back(Menu[I]);
    }

    return ExibidorDeMenus();
}
