#include "OrcamentoEstouradoException.h"

OrcamentoEstouradoException::OrcamentoEstouradoException()
{
    //ctor
}

const char* OrcamentoEstouradoException::what()
{
    return "O valor total da folha de funcion�rio � maior que o or�amento.";
}
