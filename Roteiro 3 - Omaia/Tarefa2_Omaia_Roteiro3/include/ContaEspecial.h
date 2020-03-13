#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        ContaEspecial(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);

        void definirLimite();

    private:
};

#endif // CONTAESPECIAL_H
