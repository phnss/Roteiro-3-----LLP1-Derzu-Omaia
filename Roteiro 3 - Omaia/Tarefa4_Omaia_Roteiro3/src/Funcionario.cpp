#include "Funcionario.h"
//----------------------- CONSTRUTORES -----------------------//
Funcionario::Funcionario()
{
    nome = "";
    matricula = 0;
}
Funcionario::Funcionario(std::string nome, int matricula)
{
    setNome(nome);
    setMatricula(matricula);
}
//----------------------- SETS -----------------------//
void Funcionario::setNome(std::string nome){this->nome = nome;}

void Funcionario::setMatricula(int matricula){this->matricula = matricula;}
//----------------------- GETS -----------------------//
std::string Funcionario::getNome(){return nome;}

int Funcionario::getMatricula(){return matricula;}
//----------------------- MÉTODOS -----------------------//
double Funcionario::calculaSalario(){}
