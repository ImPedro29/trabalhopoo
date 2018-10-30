#include "doctor.h"
#include <vector>

//Global Function
// Passar qualquer coisa para string

doctor::doctor(){
    especialization = "geral";
    plantao = 0;
}

doctor::doctor(const string& p_nome, const string& p_endereco, const string& p_rg , const moment& p_nascimento, const float& p_salary, const int& p_weekHours, const moment& p_entryDate, const string& p_especialization, const float& p_plantao, const vector<paciente>& p_pacients) : employee(p_nome, p_endereco, p_rg , p_nascimento, p_salary, p_weekHours, p_entryDate){
    especialization = p_especialization;
    plantao = p_plantao;
    pacients = p_pacients;
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
    doctor d = doct;

    employee *ptr;
    ptr = &d;

    output << "Doutor: " << d.getNome() << endl;
    output << " Salario Base: $" << ptr->getSalary() << endl;
    output << " Salario: $" << d.getSalary() << endl;
    output << " Especializacao: " << d.getEspecialization() << endl;
    output << " Horas Semanais: " << d.getWeekHours() << " Horas" << endl;
        while(i < doct.pacients.size()){
        paciente data = doct.pacients[i];
        output << " - " << data.getNome();
        output << "\n";
     i++;

}
 return output;
}

