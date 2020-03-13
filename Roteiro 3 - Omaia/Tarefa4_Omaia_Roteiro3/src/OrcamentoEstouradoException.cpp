#include "OrcamentoEstouradoException.h"

OrcamentoEstouradoException::OrcamentoEstouradoException()
{
    //ctor
}

const char* OrcamentoEstouradoException::what()
{
    return "O valor total da folha de funcionário é maior que o orçamento.";
}
