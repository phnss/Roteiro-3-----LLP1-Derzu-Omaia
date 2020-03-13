#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario
{
    public:
//----------------------- CONSTRUTORES -----------------------//
        Horista();
        Horista(double salarioPorHora, double horasTrabalhadas,
                std::string nome, int matricula);
//----------------------- SETS --------------------------//
        void setSalarioPorHora(double salarioPorHora);
        void setHorasTrabalhadas(double horasTrabalhadas);
//----------------------- GETS --------------------------//
        double getSalarioPorHora();
        double getHorasTrabalhadas();
//----------------------- MÉTODOS -----------------------//
        double calculaSalario();
    private:
        double salarioPorHora;
        double horasTrabalhadas;
};

#endif // HORISTA_H
