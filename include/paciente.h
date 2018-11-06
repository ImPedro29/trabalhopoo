#ifndef PACIENTE_H
#define PACIENTE_H
#include <stdio.h>
#include <iostream>
#include "pessoa.h"
#include "date.h"

class paciente : public pessoa{

    friend ostream &operator << (ostream &, const paciente&);

    private:
        string disease;
        string doctorName;
        string nurseName;

    public:

        paciente(const string& p_nome, const string& p_endereco, const string& p_rg , const date& p_nascimento, const string& p_disease);

        void setDisease(string p_disease);
        string getDisease();

        void setDoctorName(string p_doctorName);
        string getDoctorName();

        void setNurseName(string p_nurseName);
        string getNurseName();
};

#endif // PACIENTE_H
