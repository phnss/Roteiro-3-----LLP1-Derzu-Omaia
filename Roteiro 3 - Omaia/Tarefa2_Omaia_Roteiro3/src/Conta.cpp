#include "Conta.h"

//----------------------CONSTRUTORES-------------------------------------------
Conta::Conta()
{
    nomeCliente = "";
    salarioMensal = 0.0;
    numeroConta = 0;
    saldo = 0.0;
}

Conta::Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo)
{
    this->nomeCliente = nomeCliente;
    this->salarioMensal = salarioMensal;
    this->numeroConta = numeroConta;
    this->saldo = saldo;
}
//----------------------GETS---------------------------------------------------
std::string Conta::getNomeCliente(){return nomeCliente;}

double Conta::getSalarioMensal(){return salarioMensal;}

int Conta::getNumeroConta(){return numeroConta;}

double Conta::getSaldo(){return saldo;}

double Conta::getLimite(){return limite;}

//----------------------SETS---------------------------------------------------
void Conta::setNomeCliente(std::string nomeCliente){this->nomeCliente = nomeCliente;}

void Conta::setSalarioMensal(double salarioMensal){this->salarioMensal = salarioMensal;}

void Conta::setNumeroConta(int numeroConta){this->numeroConta = numeroConta;}

void Conta::setSaldo(double saldo){this->saldo = saldo;}

void Conta::setLimite(double limite){this->limite = limite;}

//-----------------------MÉTODOS-------------------------------------------------
void Conta::sacar(double valor)
{
    if((saldo + (valor * -1)) * -1 <= limite){
        saldo -= valor;
    }else{
        std::cout << "*****Saldo insuficiente.*****" << std::endl;
    }
}

void Conta::depositar(double valor)
{
    saldo += valor;
}

void Conta::definirLimite(){limite = 2 * salarioMensal;}
