#include <iostream>
#include <locale>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#include "Servicos.cpp"
#include "Aviao.cpp"

int main(){

    setlocale(LC_ALL, " ");

    /*TESTANDO OS M�TODOS SET E GET DA CLASSE AVI�O*/
    float taxa_classe1, taxa_classe2, taxa_classe3;
    int origem, destino;

    //esses valores das taxas s� poder�o serem alterados por um funcion�rio
    cout<<"Digite a taxa para a primeira classe: ";
    cin>>taxa_classe1;

    cout<<"\nDigite a taxa para a classe executiva: ";
    cin>>taxa_classe2;

    cout<<"\nDigite a taxa para a classe econ�mica: ";
    cin>>taxa_classe3;

    //j� o cliente vai inserir a otigem de onde quer partir e o destino de sua viagem
    //que s�o valores inteiros pois facilita a nossa l�gica
    cout<<"Digite a origem: ";
    cin>>origem;
    cout<<"Digite o destino: ";
    cin>>destino;


    /*TODOS OS ATRIBUTOS QUE O CONSTRUTOR RECEBE 0 OU ALGO VAZIO " ",
        SER�O ATRIBUTOS QUE NEM O USU�RIO N�O VAI INSERIR*/
    Aviao A(0, origem, destino, 0, " ", " ", " ", taxa_classe1, taxa_classe2, taxa_classe3);

    A.imprime_dados();



    return 0;
}
