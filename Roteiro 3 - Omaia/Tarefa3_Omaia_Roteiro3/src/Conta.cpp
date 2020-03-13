#include "Conta.h"

//----------------------CONSTRUTORES-------------------------------------------
Conta::Conta()
{
    nomeCliente = "";
    numeroConta = 0;
    saldo = 0.0;
}

Conta::Conta(std::string nomeCliente, int numeroConta, double saldo)
{
    this->nomeCliente = nomeCliente;
    this->numeroConta = numeroConta;
    this->saldo = saldo;
}
//----------------------GETS---------------------------------------------------
std::string Conta::getNomeCliente(){return nomeCliente;}

int Conta::getNumeroConta(){return numeroConta;}

double Conta::getSaldo(){return saldo;}

//----------------------SETS---------------------------------------------------
void Conta::setNomeCliente(std::string nomeCliente){this->nomeCliente = nomeCliente;}

void Conta::setNumeroConta(int numeroConta){this->numeroConta = numeroConta;}

void Conta::setSaldo(double saldo){this->saldo = saldo;}

//-----------------------MÉTODOS-------------------------------------------------
void Conta::sacar(double valor)
{
    if(saldo >= valor){
        saldo -= valor;
    }else{
        std::cout << "*****Saldo insuficiente.*****" << std::endl;
    }
}
void Conta::depositar(double valor)
{
    saldo += valor;
}
