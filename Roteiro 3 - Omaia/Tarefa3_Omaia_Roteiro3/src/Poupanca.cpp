#include "Poupanca.h"
//----------------------CONSTRUTORES-------------------------------------------
Poupanca::Poupanca()
{
    Conta();
    variacao = 0;
    taxaRendimento = 0.0;
}
Poupanca::Poupanca(std::string nomeCliente, int numeroConta, double saldo, int variacao, double taxaRendimento)
    : Conta(nomeCliente, numeroConta, saldo)
{
    Conta(nomeCliente, numeroConta, saldo);
    this->variacao = variacao;
    this->taxaRendimento = taxaRendimento;
}
//-------------MÉTODOS------------------------------------
double render()
{

}
