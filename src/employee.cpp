#include "employee.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

employee::employee(): pessoa(){
    salary = 954.00;
    weekHours = 20;
    date entryDate();
}

employee::employee(const string& p_nome, const string& p_endereco, const string& p_rg , const date& p_nascimento, const float& p_salary, const int& p_weekHours, const date& p_entryDate) : pessoa(p_nome, p_endereco, p_rg, p_nascimento){
    salary = p_salary;
    weekHours = p_weekHours;
    entryDate = p_entryDate;
}

float employee::getSalary(){
    return salary;
}

void employee::setSalary(float p_salary){
    salary = p_salary;
}

int employee::getWeekHours(){
    return weekHours;
}

void employee::setWeekHours(int p_weekHours){
    weekHours = p_weekHours;
}

date employee::getEntryDate(){
    return entryDate;
}

void employee::setEntryDate(date p_entryDate){
    entryDate = p_entryDate;
}

employee::~employee(){
    //destrutor
}
