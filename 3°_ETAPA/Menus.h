class Menus{
    private:
        /*Vector de controle para a exibi��o de menus*/
        vector <string> Exibidor;
        vector <string> MensagemAmigavel;
    public:
        /*M�todo padr�o para exibi��o de menus*/
        int const ExibidorDeMenus();

        /*M�todos para uso de menus*/
        int const MenuGeral();

        int const Funcionario();
        int const FuncionarioPatente();
        
        int const Cliente();
        int const ClienteEntrar();
       
};