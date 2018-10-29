#include "doctor.h"
#include <iostream>
#include <stdlib.h>

doctor::doctor():employee(){
    especialization = "Clinico Geral";
    employee::setSalary(10000);
    plantao = 0;
}

doctor::doctor(const string& p_nome, const string& p_endereco, const string& p_rg , const moment& p_nascimento, const float& p_salary, const int& p_weekHours, const moment& p_entryDate, const string& p_especialization, const float& p_plantao, const vector<paciente>& p_pacients) : employee(p_nome, p_endereco, p_rg , p_nascimento, p_salary, p_weekHours, p_entryDate){
    setEspecialization(p_especialization);
    setSalary(p_salary , p_plantao);
    plantao = p_plantao;
}

void doctor::setEspecialization(string p_especialization){
    especialization = p_especialization;
}

string doctor::getEspecialization(){
    return especialization;
}

float doctor::getSalary(){
    return (salary + ((salary/24)*2*plantao));
}

void doctor::setSalary(float p_salary, float p_plantao){
    salary = p_salary;
    plantao = p_plantao;
}
vector <paciente> doctor::getPacients(){
    return pacients;
}

void doctor::setPacients(vector <paciente> p_pacients){
    pacients = p_pacients;
}

ostream &operator<<( ostream &output, const doctor &doct )
{

    int i = 0;
    doctor n = doct;

    output << "Nurse: " << n.getNome() << "\n";
        while(i < doct.pacients.size()){
        paciente data = doct.pacients[i];
        output << "- " << data.getNome();
        output << "\n";
     i++;

}
 return output;
}
