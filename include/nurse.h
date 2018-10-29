#ifndef NURSE_H
#define NURSE_H
#include <stdio.h>
#include <iostream>
#include "employee.h"
#include "moment.h"
#include "paciente.h"
#include <vector>

using namespace std;

class nurse : public employee{

    friend ostream &operator << (ostream &, const nurse &);

    private:
        string room;
        string especialization;
        float plantao;
        vector <paciente> pacients;

    public:
        nurse();
        nurse(const string& p_nome, const string& p_endereco, const string& p_rg , const moment& p_nascimento, const float& p_salary, const int& p_weekHours, const moment& p_entryDate, const string& p_room, const string& p_especialization, const float& p_plantao, const vector<paciente>& p_pacients);

        string getRoom();
        void setRoom(string p_room);

        string getEspecialization();
        void setEspecialization(string p_especialization);

        float getSalary();
        void setSalary(float p_salary, float p_plantao);

        vector <paciente> getPacients();
        void setPacients(vector <paciente> p_pacients);

};

#endif // NURSE_H
