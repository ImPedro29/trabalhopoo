#include "employee.h"
#include <iostream>

using namespace std;

employee::employee(){
    salary = 954.00;
    weekHours = 20;
    entryDate = new moment();
}

employee::employee(const string& p_nome, const string& p_endereco, const string& p_rg , const moment& p_nascimento, const float& p_salary, const int& p_weekHours, const moment& p_entryDate){
    salary = p_salary;
    weekHours = p_weekHours;
    *entryDate = p_entryDate;
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

moment employee::getEntryDate(){
    return *entryDate;
}

void employee::setEntryDate(moment p_entryDate){
    *entryDate = p_entryDate;
}


employee::~employee(){
    //destrutor
}
