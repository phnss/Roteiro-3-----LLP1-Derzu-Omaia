#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException()
{
    //ctor
}

const char* FuncionarioNaoExisteException::what()
{
    return "Não existe funcionário com esse nome.";
}
