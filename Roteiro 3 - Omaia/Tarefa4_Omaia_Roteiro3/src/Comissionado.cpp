#include "Comissionado.h"

//----------------------- CONSTRUTORES -----------------------//
Comissionado::Comissionado()
{
    setVendasSemanais(0.0);
    setPercentualComissao(0.0);
    setSalarioBase(0.0);
    setNome("");
    setMatricula(0);
}
Comissionado::Comissionado(double vendasSemanais, double percentualComissao,
                           double salarioBase, std::string nome, int matricula)
{
    setVendasSemanais(vendasSemanais);
    setPercentualComissao(percentualComissao);
    setSalarioBase(salarioBase);
    setNome(nome);
    setMatricula(matricula);
}
//----------------------- SETS --------------------------//
void Comissionado::setVendasSemanais(double vendasSemanais){this->vendasSemanais = vendasSemanais;}

void Comissionado::setPercentualComissao(double percentualComissao){this->percentualComissao = percentualComissao;}

void Comissionado::setSalarioBase(double salarioBase){this->salarioBase = salarioBase;}
//----------------------- GETS --------------------------//
double Comissionado::getVendasSemanais(){return vendasSemanais;}

double Comissionado::getPercentualComissao(){return percentualComissao;}

double Comissionado::getSalarioBase(){return salarioBase;}
//----------------------- MÉTODOS -----------------------//
double Comissionado::calculaSalario()
{
    if(percentualComissao <= 1 )
        return salarioBase + (vendasSemanais * percentualComissao);
    else
        return salarioBase + (vendasSemanais * (percentualComissao/100));
}
