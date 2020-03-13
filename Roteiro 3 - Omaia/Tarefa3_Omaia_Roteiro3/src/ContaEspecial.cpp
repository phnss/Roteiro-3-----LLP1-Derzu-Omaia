#include "ContaEspecial.h"

//----------------------CONSTRUTORES-------------------------------------------
ContaEspecial::ContaEspecial()
{
    ContaCorrente();
}
ContaEspecial::ContaEspecial(double salario, double limite, std::string nomeCliente, int numeroConta, double saldo)
    : ContaCorrente(salario, limite, nomeCliente, numeroConta, saldo)
{
    ContaCorrente(salario, limite, nomeCliente, numeroConta, saldo);
}
//-----------------------MÉTODOS-----------------------------------------------
double ContaEspecial::definirLimite()
{
    limite = 4 * salario;
    return limite;
}
