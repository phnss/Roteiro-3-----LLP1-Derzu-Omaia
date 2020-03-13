#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H

#include <exception>

class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException();

        const char* what();
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
