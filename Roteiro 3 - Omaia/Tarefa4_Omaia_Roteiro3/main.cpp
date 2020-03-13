#include <iostream>
#include <locale>

#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "SistemaGerenciaFolha.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    SistemaGerenciaFolha adm = SistemaGerenciaFolha();

    Funcionario *funcionarioAssalariado = new Assalariado(3000, "Robson", 123);
    Funcionario *funcionarioHorista = new Horista(80, 41, "Aden�lson", 321);
    Funcionario *funcionarioComissionado = new Comissionado(400, 10, 4000, "Tuckson", 135);

    cout<<"---------------Assalariado---------------"<<endl;
    cout<<"Nome: "<<funcionarioAssalariado->getNome()<<endl;
    cout<<"Matricula: "<<funcionarioAssalariado->getMatricula()<<endl;
    cout<<"Sal�rio: "<<funcionarioAssalariado->calculaSalario()<<endl;

    cout<<"---------------Horista---------------"<<endl;
    cout<<"Nome: "<<funcionarioHorista->getNome()<<endl;
    cout<<"Matr�cula: "<<funcionarioHorista->getMatricula()<<endl;
    //cout<<"Sal�rio por hora: "<<funcionarioHorista->getSalarioPorHora()<<endl;
    //cout<<"Horas Trabalhadas: "<<funcionarioHorista->getHorasTrabalhadas()<<endl;
    cout<<"Sal�rio total: "<<funcionarioHorista->calculaSalario()<<endl;

    cout<<"---------------Comissionados---------------"<<endl;
    cout<<"Nome: "<<funcionarioComissionado->getNome()<<endl;
    cout<<"Matr�cula: "<<funcionarioComissionado->getMatricula()<<endl;
    //cout<<"Sal�rio base: "<<funcionarioComissionado->getSalarioBase()<<endl;
    //cout<<"Vendas semanais: "<<funcionarioComissionado->getVendasSemanais()<<endl;
    //cout<<"Percentual nas vendas: "<<funcionarioComissionado->getPercentualComissao()<<endl;
    cout<<"Sal�rio total: "<<funcionarioComissionado->calculaSalario()<<endl;

    cout<<"\n--------------- Sistema de Gerencia da folha ---------------"<<endl;
    cout<<"Or�amento m�ximo: "<<adm.getOrcamentoMaximo()<<endl;

    adm.setFuncionarios(funcionarioAssalariado);
    adm.setFuncionarios(funcionarioHorista);
    adm.setFuncionarios(funcionarioComissionado);

    try{
        cout<<"Calculando o valor da folha de funcion�rios."<<endl;
        cout<<"Total da Folha: "<<adm.calculaTotalFolha()<<endl;
    }catch(OrcamentoEstouradoException error){
        cout<<"Falhou, "<<error.what()<<endl;
    }

    try{
        cout<<"\nCalculando o s�lario do funcion�rio Robson."<<endl;
        cout<<"Salario do funcion�rio Robson: "<<adm.consultaSalarioFuncionario("Robson")<<endl;
    }catch(FuncionarioNaoExisteException error){
        cout<<"Falhou, "<< error.what()<<endl;
    }

    try{
        cout<<"\nCalculando o s�lario do funcion�rio Pedro."<<endl;
        cout<<"Salario do funcion�rio Robson: "<<adm.consultaSalarioFuncionario("Pedro")<<endl;
    }catch(FuncionarioNaoExisteException error){
        cout<<"Falhou, "<< error.what()<<endl;
    }
    return 0;
}
