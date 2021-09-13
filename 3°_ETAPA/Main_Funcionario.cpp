#include <iostream>
#include <locale>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#include "Usuario.cpp"
#include "Funcionario.cpp"

int main(){

    setlocale(LC_ALL, "");

    /*TESTANDO OS M�TODOS SET E GET DA CLASSE AVI�O*/
    string email;
    string senha;
    string nome_completo;
    string data_nascimento;
    string endereco;
    string telefone;
    string telefone_familiar;
    string documento;

    string classe_do_funcionario;
    string plano_de_saude;
    string regiao_de_atuacao;

    //esses valores das taxas s� poder�o serem alterados por um funcion�rio
    cout<<"Digite o e-mail: ";
    cin>>email;

    cout<<"\nDigite a senha: ";
    cin>>senha;

    cout<<"\nDigite o nome completo: ";
    cin.ignore();
    getline(cin, nome_completo);

    cout<<"\nDigite a data de nascimento: ";
    cin>>data_nascimento;

    cout<<"\nDigite o endere�o: ";
    cin.ignore();
    getline(cin, endereco);

    cout<<"\nDigite o telefone: ";
    cin>>telefone;

    cout<<"\nDigite o telefone familiar: ";
    cin>>telefone_familiar;

    cout<<"\nN�mero do documento: ";
    cin>>documento;

    cout<<"\nDigite a classe do funcion�rio: ";
    cin>>classe_do_funcionario;

    cout<<"\nPossui plano de sa�de: ";
    cin>>plano_de_saude;

    cout<<"\nDigite a regi�o de atua��o do funcion�rio: ";
    cin>>regiao_de_atuacao;

    /*TODOS OS ATRIBUTOS QUE O CONSTRUTOR RECEBE 0 OU ALGO VAZIO " ",
        SER�O ATRIBUTOS QUE NEM O USU�RIO N�O VAI INSERIR*/
   Funcionario F(email, senha, nome_completo, data_nascimento, endereco, telefone,
                    telefone_familiar, documento, 0, classe_do_funcionario, plano_de_saude, regiao_de_atuacao, 0);

    F.imprime_dados_1();



    return 0;
}

