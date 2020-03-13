#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    //ctor
}

ContaEspecial::ContaEspecial(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo)
{
    this->nomeCliente = nomeCliente;
    this->salarioMensal = salarioMensal;
    this->numeroConta = numeroConta;
    this->saldo = saldo;
}

void ContaEspecial::definirLimite()
{
    limite = 3 * salarioMensal;
}
