#include <iostream>
#include <locale>

#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Conta conta = Conta("Alderbaldo Garcia", 1234, 400);

    cout << "\\-----------------------Classe: Conta-----------------------//" << endl;
    cout << "Conta: " << conta.getNumeroConta() << endl;
    cout << "Nome: " << conta.getNomeCliente() << endl;
    cout << "Saldo: " << conta.getSaldo() << "\n" << endl;

    ContaCorrente contaConrrente = ContaCorrente(3000, 4000, "Palerma 01", 4321, 10000);

    cout << "\\-----------------------Classe: ContaConrrente-----------------------//" << endl;
    cout << "Conta: " << contaConrrente.getNumeroConta() << endl;
    cout << "Nome: " << contaConrrente.getNomeCliente() << endl;
    cout << "Sal�rio: " << contaConrrente.getSalario() << endl;
    cout << "Saldo: " << contaConrrente.getSaldo() << endl;
    cout << "Limite: " << contaConrrente.getLimite() << "\n" << endl;

    contaConrrente.depositar(2500);
    cout << "Saldo: " << contaConrrente.getSaldo() << endl;
    contaConrrente.sacar(20000);
    cout << "(Ap�s tentativa de sacar 20000)Saldo: " << contaConrrente.getSaldo() << endl;
    cout << "Chamando a fun��o definirLimite: " << contaConrrente.definirLimite() << endl;

    ContaEspecial contaEspecial = ContaEspecial(700, 2000, "Palerma 02", 135, 4000);

    cout << "\\-----------------------Classe: ContaEspecial-----------------------//" << endl;
    cout << "Conta: " << contaEspecial.getNumeroConta() << endl;
    cout << "Nome: " << contaEspecial.getNomeCliente() << endl;
    cout << "Sal�rio: " << contaEspecial.getSalario() << endl;
    cout << "Saldo: " << contaEspecial.getSaldo() << endl;
    cout << "Limite: " << contaEspecial.getLimite() << "\n" << endl;

    contaEspecial.depositar(2500);
    cout << "Saldo: " << contaEspecial.getSaldo() << endl;
    contaEspecial.sacar(20000);
    cout << "(Ap�s tentativa de sacar 20000)Saldo: " << contaEspecial.getSaldo() << endl;
    cout << "Chamando a fun��o definirLimite: " << contaEspecial.definirLimite() << endl;

    cout << "\\-----------------------Classe: Poupan�a-----------------------//" << endl;

    return 0;
}
