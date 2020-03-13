#ifndef POUPANCA_H
#define POUPANCA_H

#include "Conta.h"

class Poupanca : public Conta
{
//-------------CONSTRUTORES-------------------------------
    public:
        Poupanca();
        Poupanca(std::string nomeCliente, int numeroConta, double saldo, int variacao, double taxaRendimento);
//-------------M…TODOS------------------------------------
    double render();
//-------------VARI¡VEIS----------------------------------
    private:
        int variacao;
        double taxaRendimento;
};

#endif // POUPANÁA_H
