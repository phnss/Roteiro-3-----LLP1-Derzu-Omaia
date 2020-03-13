#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

class Assalariado : public Funcionario
{
    public:
//----------------------- CONSTRUTORES -----------------------//
        Assalariado();
        Assalariado(double salario, std::string nome, int matricula);
//----------------------- SETS --------------------------//
        void setSalario(double salario);
//----------------------- GETS --------------------------//
        double getSalario();
//----------------------- MÉTODOS -----------------------//
        double calculaSalario();
    private:
        double salario;
};

#endif // ASSALARIADO_H
