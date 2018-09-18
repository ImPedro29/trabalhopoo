#ifndef DOCTOR_H
#define DOCTOR_H
#include <stdio.h>
#include <iostream>
#include "employee.h"
#include "moment.h"


class doctor : public employee{
    private:
        string especialization;
        float plantao;

    public:
        doctor();
        doctor(const string& p_nome, const string& p_endereco, const string& p_rg , const moment& p_nascimento, const float& p_salary, const int& p_weekHours, const moment& p_entryDate, const string& p_especialization, const float& p_plantao);

        void setEspecialization (string p_especialization);
        string getEspecialization();

        float getSalary();
        void setSalary(float p_salary, float p_plantao);
};

#endif // DOCTOR_H
