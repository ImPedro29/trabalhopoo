#ifndef DOCTOR_H
#define DOCTOR_H
#include <stdio.h>
#include <iostream>
#include "employee.h"
#include "date.h"
#include "paciente.h"
#include <vector>

using namespace std;

class doctor : public employee{

    friend ostream &operator << (ostream &, const doctor &);

    private:
        string especialization;
        float plantao;
        vector <paciente> pacients;

    public:
        doctor();
        doctor(const string& p_nome, const string& p_endereco, const string& p_rg , const date& p_nascimento, const float& p_salary, const int& p_weekHours, const date& p_entryDate, const string& p_especialization, const float& p_plantao, const vector<paciente>& p_pacients);
        string getEspecialization();
        void setEspecialization(string p_especialization);

        float getSalary();
        void setSalary(float p_salary, float p_plantao);

        vector <paciente> getPacients();
        void setPacients(vector <paciente> p_pacients);

};

#endif // NURSE_H
