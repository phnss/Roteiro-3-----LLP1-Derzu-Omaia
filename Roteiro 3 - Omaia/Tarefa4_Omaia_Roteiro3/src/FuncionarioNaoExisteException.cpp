#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException()
{
    //ctor
}

const char* FuncionarioNaoExisteException::what()
{
    return "N�o existe funcion�rio com esse nome.";
}
