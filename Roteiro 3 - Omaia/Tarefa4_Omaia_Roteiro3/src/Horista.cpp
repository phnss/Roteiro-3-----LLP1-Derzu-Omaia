#include "Horista.h"

//----------------------- CONSTRUTORES -----------------------//
Horista::Horista()
{
    setNome("");
    setMatricula(0);
    setSalarioPorHora(0.0);
    setHorasTrabalhadas(0.0);
}
Horista::Horista(double salarioPorHora, double horasTrabalhadas, std::string nome, int matricula)
{
    setSalarioPorHora(salarioPorHora);
    setHorasTrabalhadas(horasTrabalhadas);
    setNome(nome);
    setMatricula(matricula);
}
//----------------------- SETS --------------------------//
void Horista::setSalarioPorHora(double salarioPorHora){this->salarioPorHora = salarioPorHora;}

void Horista::setHorasTrabalhadas(double horasTrabalhadas){this->horasTrabalhadas = horasTrabalhadas;}
//----------------------- GETS --------------------------//
double Horista::getSalarioPorHora(){return salarioPorHora;}

double Horista::getHorasTrabalhadas(){return horasTrabalhadas;}
//----------------------- MÉTODOS -----------------------//
double Horista::calculaSalario()
{
    if(horasTrabalhadas <=40){
        return horasTrabalhadas * salarioPorHora;
    }else{
        return (40 * salarioPorHora) + ((horasTrabalhadas - 40) * salarioPorHora * 1.5);
    }
}
