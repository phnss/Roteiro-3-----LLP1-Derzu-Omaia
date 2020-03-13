#include "ContaCorrente.h"

//----------------------CONSTRUTORES-------------------------------------------
ContaCorrente::ContaCorrente()
{
    Conta();
    salario = 0.0;
    limite = 0.0;
}

ContaCorrente::ContaCorrente(double salario, double limite, std::string nomeCliente, int numeroConta, double saldo)
    : Conta(nomeCliente, numeroConta, saldo)
{
    Conta(nomeCliente, numeroConta, saldo);
    this->salario = salario;
    this->limite = limite;
}
//----------------------GETS---------------------------------------------------
double ContaCorrente::getSalario(){return salario;}

double ContaCorrente::getLimite(){return limite;}

//----------------------SETS---------------------------------------------------
void ContaCorrente::setSalario(double salario){this->salario = salario;}

void ContaCorrente::setLimite(double limite){this->limite = limite;}

//-----------------------MÉTODOS-----------------------------------------------
double ContaCorrente::definirLimite()
{
    limite = 2 * salario;
    return limite;
}
