#ifndef NURSE_H
#define NURSE_H
#include <stdio.h>
#include <iostream>
#include "employee.h"
#include "moment.h"

class nurse : public employee{
    private:
        string room;
        string especialization;
        float plantao;
    public:
        nurse();
        nurse(const string& p_nome, const string& p_endereco, const string& p_rg , const moment& p_nascimento, const float& p_salary, const int& p_weekHours, const moment& p_entryDate, const string& p_room, const string& p_especialization, const float& p_plantao);

        string getRoom();
        void setRoom(string p_room);

        string getEspecialization();
        void setEspecialization(string p_especialization);

        float getSalary();
        void setSalary(float p_salary, float p_plantao);
};

#endif // NURSE_H