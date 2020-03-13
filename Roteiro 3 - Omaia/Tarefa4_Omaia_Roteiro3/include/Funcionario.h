#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
    public:
//----------------------- CONSTRUTORES -----------------------//
        Funcionario();
        Funcionario(std::string nome, int matricula);
//----------------------- SETS --------------------------//
        void setNome(std::string nome);
        void setMatricula(int matricula);
//----------------------- GETS --------------------------//
        std::string getNome();
        int getMatricula();
//----------------------- MÉTODOS -----------------------//
       virtual double calculaSalario();

    protected:
        std::string nome;
        int matricula;
};

#endif // FUNCIONARIO_H
