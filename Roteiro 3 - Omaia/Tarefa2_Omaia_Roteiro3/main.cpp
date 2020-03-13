#include <iostream>
#include <locale>

#include "Conta.h"
#include "ContaEspecial.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Conta conta1 = Conta("João Everaldo", 7000.50, 1234, 0);
    ContaEspecial conta2 = ContaEspecial("Pedro Alexandre", 5000, 4321, 0);

    conta1.definirLimite();
    conta2.definirLimite();

    cout << "//-----------------------Clientes-----------------------//" << endl;
    cout << "Cliente: " << conta1.getNomeCliente() << endl;
    cout << "Número da conta: " << conta1.getNumeroConta() << endl;
    cout << "Sálario mensal: " << conta1.getSalarioMensal() << endl;
    cout << "Saldo: " << conta1.getSaldo() << endl;
    cout << "Limite da conta: " << conta1.getLimite() << endl;

    cout << endl;

    cout << "Cliente: " << conta2.getNomeCliente() << endl;
    cout << "Número da conta: " << conta2.getNumeroConta() << endl;
    cout << "Sálario mensal: " << conta2.getSalarioMensal() << endl;
    cout << "Saldo: " << conta2.getSaldo() << endl;
    cout << "Limite da conta: " << conta2.getLimite() << endl;

    cout << "//-----------------------Clientes(Após modificação no saldo1)-----------------------//" << endl;
    cout << "Cliente: " << conta1.getNomeCliente() << endl;
    cout << "Número da conta: " << conta1.getNumeroConta() << endl;
    cout << "Sálario mensal: " << conta1.getSalarioMensal() << endl;
    conta1.sacar(14000);
    cout << "Saldo: " << conta1.getSaldo() << endl;
    cout << "Limite da conta: " << conta1.getLimite() << endl;

    cout << endl;

    cout << "Cliente: " << conta2.getNomeCliente() << endl;
    cout << "Número da conta: " << conta2.getNumeroConta() << endl;
    cout << "Sálario mensal: " << conta2.getSalarioMensal() << endl;
    conta2.sacar(6000);
    cout << "Saldo: " << conta2.getSaldo() << endl;
    cout << "Limite da conta: " << conta2.getLimite() << endl;

    cout << "//-----------------------Clientes(Após modificação no saldo2)-----------------------//" << endl;
    cout << "Cliente: " << conta1.getNomeCliente() << endl;
    cout << "Número da conta: " << conta1.getNumeroConta() << endl;
    cout << "Sálario mensal: " << conta1.getSalarioMensal() << endl;
    conta1.sacar(14000);
    cout << "Saldo: " << conta1.getSaldo() << endl;
    cout << "Limite da conta: " << conta1.getLimite() << endl;


    cout << endl;

    cout << "Cliente: " << conta2.getNomeCliente() << endl;
    cout << "Número da conta: " << conta2.getNumeroConta() << endl;
    cout << "Sálario mensal: " << conta2.getSalarioMensal() << endl;
    conta2.sacar(6000);
    cout << "Saldo: " << conta2.getSaldo() << endl;
    cout << "Limite da conta: " << conta2.getLimite() << endl;

    cout << "//-----------------------Clientes(Após modificação no saldo3)-----------------------//" << endl;
    cout << "Cliente: " << conta1.getNomeCliente() << endl;
    cout << "Número da conta: " << conta1.getNumeroConta() << endl;
    cout << "Sálario mensal: " << conta1.getSalarioMensal() << endl;
    conta1.sacar(1);
    cout << "Saldo: " << conta1.getSaldo() << endl;
    cout << "Limite da conta: " << conta1.getLimite() << endl;


    cout << endl;

    cout << "Cliente: " << conta2.getNomeCliente() << endl;
    cout << "Número da conta: " << conta2.getNumeroConta() << endl;
    cout << "Sálario mensal: " << conta2.getSalarioMensal() << endl;
    conta2.sacar(3000);
    cout << "Saldo: " << conta2.getSaldo() << endl;
    cout << "Limite da conta: " << conta2.getLimite() << endl;

    cout << "//-----------------------Clientes(Após modificação no saldo4)-----------------------//" << endl;
    cout << "Cliente: " << conta1.getNomeCliente() << endl;
    cout << "Número da conta: " << conta1.getNumeroConta() << endl;
    cout << "Sálario mensal: " << conta1.getSalarioMensal() << endl;
    conta1.depositar(25000);
    cout << "Saldo: " << conta1.getSaldo() << endl;
    cout << "Limite da conta: " << conta1.getLimite() << endl;


    cout << endl;

    cout << "Cliente: " << conta2.getNomeCliente() << endl;
    cout << "Número da conta: " << conta2.getNumeroConta() << endl;
    cout << "Sálario mensal: " << conta2.getSalarioMensal() << endl;
    conta2.depositar(25000);
    cout << "Saldo: " << conta2.getSaldo() << endl;
    cout << "Limite da conta: " << conta2.getLimite() << endl;

    return 0;
}
