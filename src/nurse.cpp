#include "nurse.h"

nurse::nurse(){
    room = "none";
    especialization = "geral";
    plantao = 0;
}

nurse::nurse(const string& p_nome, const string& p_endereco, const string& p_rg , const moment& p_nascimento, const float& p_salary, const int& p_weekHours, const moment& p_entryDate, const string& p_room, const string& p_especialization, const float& p_plantao) : employee(p_nome, p_endereco, p_rg , p_nascimento, p_salary, p_weekHours, p_entryDate){
    room = p_room;
    especialization = p_especialization;
    plantao = p_plantao;
}

void nurse::setEspecialization(string p_especialization){
    especialization = p_especialization;
}

string nurse::getEspecialization(){
    return especialization;
}

void nurse::setRoom(string p_room){
    room = p_room;
}

string nurse::getRoom(){
    return room;
}

float nurse::getSalary(){
    return (salary + ((salary/24)*1.2*plantao));
}

void nurse::setSalary(float p_salary, float p_plantao){
    salary = p_salary;
    plantao = p_plantao;
}


