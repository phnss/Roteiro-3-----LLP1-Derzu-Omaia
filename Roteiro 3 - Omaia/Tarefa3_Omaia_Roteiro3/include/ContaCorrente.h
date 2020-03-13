#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente : public Conta
{
    public:
//-------------CONSTRUTORES-----------------------
        ContaCorrente();
        ContaCorrente(double salario, double limite, std::string nomeCliente, int numeroConta, double saldo);
//-------------GETS-------------------------------
        double getSalario();
        double getLimite();
//-------------SETS-------------------------------
        void setSalario(double salario);
        void setLimite(double limite);
//-------------MÉTODOS----------------------------
        double definirLimite();
//-------------VARÍAVEIS--------------------------
    protected:
        double salario;
        double limite;
};

#endif // CONTACORRENTE_H
