#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdio.h>
#include <iostream>
#include "pessoa.h"
#include "moment.h"

class employee:public pessoa{
    protected:
        float salary;
        int weekHours;
        moment entryDate;
    public:
        employee();
        employee(const string& p_nome, const string& p_endereco, const string& p_rg , const moment& p_nascimento, const float& p_salary, const int& p_weekHours, const moment& p_entryDate);

        float getSalary();
        void setSalary(float p_salary);

        int getWeekHours();
        void setWeekHours(int p_weekHours);

        moment getEntryDate();
        void setEntryDate(moment p_entryDate);

        virtual ~employee();
};

#endif // EMPLOYEE_H
