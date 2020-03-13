#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario
{
    public:
//----------------------- CONSTRUTORES -----------------------//
        Comissionado();
        Comissionado(double vendasSemanais, double percentualComissao,
                     double salarioBase, std::string nome, int matricula);
//----------------------- SETS --------------------------//
        void setVendasSemanais(double vendasSemanais);
        void setPercentualComissao(double percentualComissao);
        void setSalarioBase(double salarioBase);
//----------------------- GETS --------------------------//
        double getVendasSemanais();
        double getPercentualComissao();
        double getSalarioBase();
//----------------------- MÉTODOS -----------------------//
        double calculaSalario();
    private:
        double vendasSemanais;
        double percentualComissao;
        double salarioBase;
};

#endif // COMISSIONADO_H
