#ifndef ADULTO_H
#define ADULTO_H
#include <stdio.h>
#include <iostream>
#include "pessoa.h"

using namespace std;

class adulto:public pessoa{
    private:
        string cpf;
        string value;
    public:
        adulto();
        virtual ~adulto();
};

#endif // ADULTO_H
