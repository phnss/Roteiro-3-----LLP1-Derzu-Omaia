#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente
{
//-------------CONSTRUTORES-----------------------
    public:
        ContaEspecial();
        ContaEspecial(double salario, double limite, std::string nomeCliente, int numeroConta, double saldo);

        double definirLimite();
    private:
};

#endif // CONTAESPECIAL_H
