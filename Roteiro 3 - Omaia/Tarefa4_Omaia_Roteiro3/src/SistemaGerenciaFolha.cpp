#include "SistemaGerenciaFolha.h"

//----------------------- CONSTRUTORES -----------------------//
SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    for(int i=0;i<10;i++){
        funcionarios[i] = new Funcionario();
    }
    orcamentoMaximo = 10000;
}
SistemaGerenciaFolha::SistemaGerenciaFolha(Funcionario *funcionarios, int pos)
{
    this->funcionarios[pos] = funcionarios;
}
//----------------------- SETS --------------------------//
void SistemaGerenciaFolha::setFuncionarios(Funcionario *funcionarios)
{
    for(int i= 0;i<10;i++){
        if(this->funcionarios[i]->getNome() == ""){
            this->funcionarios[i] = funcionarios;
            break;
        }
    }
}
void SistemaGerenciaFolha::setOrcamentoMaximo(double orcamentoMaximo){this->orcamentoMaximo = orcamentoMaximo;}
//----------------------- GETS --------------------------//
double SistemaGerenciaFolha::getOrcamentoMaximo(){return orcamentoMaximo;}
//----------------------- MÉTODOS -----------------------//
double SistemaGerenciaFolha::calculaTotalFolha()
{
    double total = 0;

    for(int i=0;i<10;i++){
        if(funcionarios[i]->getNome() != "")
            total += funcionarios[i]->calculaSalario();
    }

    if(total > getOrcamentoMaximo()){
            OrcamentoEstouradoException error;
            throw error;
    }
    return total;
}
double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nomeFuncionario)
{
    double salario = 0.0;

    for(int i=0;i<10;i++){
        if(funcionarios[i]->getNome() == nomeFuncionario)
            salario = funcionarios[i]->calculaSalario();
    }
    if(salario == 0.0){
        FuncionarioNaoExisteException error;
        throw error;
    }
    return salario;
}
