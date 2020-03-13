#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <iostream>

#include "IConta.h"

class Conta : public IConta
{
    public:
        Conta();
        Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);

        std::string getNomeCliente();
        double getSalarioMensal();
        int getNumeroConta();
        double getSaldo();
        double getLimite();

        void setNomeCliente(std::string nomeCliente);
        void setSalarioMensal(double salarioMensal);
        void setNumeroConta(int numeroConta);
        void setSaldo(double saldo);
        void setLimite(double limite);

        void sacar(double valor);
        void depositar(double valor);
        void definirLimite();

    protected:
        std::string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;
};

#endif // CONTA_H
