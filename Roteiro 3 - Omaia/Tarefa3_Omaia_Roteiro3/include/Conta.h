#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <iostream>

class Conta
{
    public:
//-------------CONSTRUTORES-----------------------------------------------------------------//
        Conta();                                                                            //
        Conta(std::string nomeCliente, int numeroConta, double saldo);//
//-------------GETS-------------------------------------------------------------------------//
        std::string getNomeCliente();                                                       //
        int getNumeroConta();                                                               //
        double getSaldo();                                                                  //
//-------------SETS-------------------------------------------------------------------------//
        void setNomeCliente(std::string nomeCliente);                                       //
        void setNumeroConta(int numeroConta);                                               //
        void setSaldo(double saldo);                                                        //
//-------------M�TODOS----------------------------------------------------------------------//
        void sacar(double valor);                                                           //
        void depositar(double valor);                                                       //
//------------VAR�AVEIS---------------------------------------------------------------------//
    protected:                                                                              //
        std::string nomeCliente;                                                            //
        int numeroConta;                                                                    //
        double saldo;                                                                       //
//------------------------------------------------------------------------------------------//
};
#endif // CONTA_H
