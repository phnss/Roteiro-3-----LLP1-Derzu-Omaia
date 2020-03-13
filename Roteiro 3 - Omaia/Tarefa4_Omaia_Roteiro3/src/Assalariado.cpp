#include "Assalariado.h"
//----------------------- CONSTRUTORES -----------------------//
Assalariado::Assalariado()
{
    salario = 0.0;
    nome = "";
    matricula = 0;
}
Assalariado::Assalariado(double salario, std::string nome, int matricula)
    //: Funcionario(nome, matricula)
{
    setSalario(salario);
    setNome(nome);
    setMatricula(matricula);
}
//----------------------- SETS --------------------------//
void Assalariado::setSalario(double salario){this->salario = salario;}
//----------------------- GETS --------------------------//
double Assalariado::getSalario(){return salario;}
//----------------------- MÉTODOS -----------------------//
double Assalariado::calculaSalario(){return salario;}
