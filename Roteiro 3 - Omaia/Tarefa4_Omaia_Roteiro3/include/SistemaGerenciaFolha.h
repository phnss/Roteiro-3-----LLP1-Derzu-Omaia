#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include "Funcionario.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

class SistemaGerenciaFolha
{
    public:
//----------------------- CONSTRUTORES -----------------------//
        SistemaGerenciaFolha();
        SistemaGerenciaFolha(Funcionario *funcionarios, int pos);
//----------------------- SETS --------------------------//
        void setFuncionarios(Funcionario *funcionarios);
        void setOrcamentoMaximo(double orcamentoMaximo);
//----------------------- GETS --------------------------//
        double getOrcamentoMaximo();
//----------------------- MÉTODOS -----------------------//
        double calculaTotalFolha();
        double consultaSalarioFuncionario(std::string nomeFuncionario);

    private:
        Funcionario *funcionarios[10];
        double orcamentoMaximo;
};

#endif // SISTEMAGERENCIAFOLHA_H
