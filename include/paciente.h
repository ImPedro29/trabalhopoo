#ifndef PACIENTE_H
#define PACIENTE_H
#include <stdio.h>
#include <iostream>
#include "doctor.h"
#include "pessoa.h"
#include "moment.h"

class paciente : public pessoa{
    private:
        string disease;
        doctor doct;

    public:
        paciente(const string& p_nome, const string& p_endereco, const string& p_rg , const moment& p_nascimento, const string& p_disease, const doctor& p_doct);

        void setDisease(string p_disease);
        string getDisease();

        void setDoctor(doctor p_doct);
        doctor getDoctor();
};

#endif // PACIENTE_H
