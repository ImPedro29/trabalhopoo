#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdio.h>
#include <iostream>
#include "pessoa.h"
#include "date.h"

class employee:public pessoa{
    private:
        int weekHours;
        date entryDate;
    protected:
        float salary;
    public:
        employee();
        employee(const string& p_nome, const string& p_endereco, const string& p_rg , const date& p_nascimento, const float& p_salary, const int& p_weekHours, const date& p_entryDate);

        float getSalary();
        void setSalary(float p_salary);

        int getWeekHours();
        void setWeekHours(int p_weekHours);

        date getEntryDate();
        void setEntryDate(date p_entryDate);

        virtual ~employee();
};

#endif // EMPLOYEE_H
