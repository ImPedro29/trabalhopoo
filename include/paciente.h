#ifndef PACIENTE_H
#define PACIENTE_H
#include <stdio.h>
#include <iostream>
#include "doctor.h"
#include "pessoa.h"
#include "moment.h"

class paciente : public pessoa{

    //friend ostream &operator << (ostream &, const paciente&);

    private:
        string disease;

    public:
        paciente(const string& p_nome, const string& p_endereco, const string& p_rg , const moment& p_nascimento, const string& p_disease);

        void setDisease(string p_disease);
        string getDisease();

};

#endif // PACIENTE_H
