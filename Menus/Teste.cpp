#include <conio.h>
#include <iostream>
#include <locale>
#include <vector>
#include <windows.h> /*Para uso da fun��o que muda as cores de strings*/

using namespace std;

#include "Menus.cpp"

/*PARA O FUNCIONAMENTO CORRETO DO PROGRAMA DESLIGUE O "CAPS LOCK"*/
int main(){
    setlocale(LC_ALL,"Portuguese");
    system("cls");
    Menus Teste;
    
    while(1){
        /* Cada switch � executado com um while(1) e � finalizado por padr�o
        em retorno 99*/

        int teste = Teste.MenuGeral();
        /*Chama a fun��o que vai entrar no switch, e iguala a uma vari�vel
        n�o � chamada diretamente no switch, pois alguns m�todos (como a dist�ncia)
        vai precisar do valor retornado para operar*/

        switch(teste){ /*Menu geral*/
            case 0:{
                while(1){
                    int teste = Teste.Funcionario();
                    switch(teste){/*Menu cliente*/
                        case 0:{
                            cout << endl << "Voc� entrou na op��o 1" << endl;
                            system("pause"); 
                        }
                        break;
                        case 1:{
                            cout << endl << "Voc� entrou na op��o 2" << endl;
                            system("pause"); 
                        }
                        break;
                    }
                    if(teste == 99){
                    break;
                    }
                }    
            }
            break;
            case 1:{
                while(1){
                    int teste = Teste.Cliente();
                    switch(teste){/*Menu cliente*/
                        case 0:{
                            cout << endl << "Voc� entrou na op��o 1" << endl;
                            system("pause"); 
                        }
                        break;
                        case 1:{
                            cout << endl << "Voc� entrou na op��o 2" << endl;
                            system("pause"); 
                        }
                        break;
                    }
                    if(teste == 99){
                    break;
                    }
                }    
            }
            break;
        }
        /*Padr�o para encerrar os whiles*/
        if(teste == 99){
            cout << "O programa foi finalizado, obrigado por vooar com a AirPlane!";
            break;
        }      
    }

    return 0;
}