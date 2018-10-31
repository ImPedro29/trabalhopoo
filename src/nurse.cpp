#include "nurse.h"
#include <vector>

//Global Function
// Passar qualquer coisa para string

nurse::nurse(){
    room = "none";
    especialization = "geral";
    plantao = 0;
}

nurse::nurse(const string& p_nome, const string& p_endereco, const string& p_rg , const date& p_nascimento, const float& p_salary, const int& p_weekHours, const date& p_entryDate, const string& p_room, const string& p_especialization, const float& p_plantao, const vector<paciente>& p_pacients) : employee(p_nome, p_endereco, p_rg , p_nascimento, p_salary, p_weekHours, p_entryDate){
    room = p_room;
    especialization = p_especialization;
    plantao = p_plantao;
    pacients = p_pacients;
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

vector <paciente> nurse::getPacients(){
    return pacients;
}

void nurse::setPacients(vector <paciente> p_pacients){
    pacients = p_pacients;
}

ostream &operator<<( ostream &output, const nurse &nurs )
{

    int i = 0;
    nurse n = nurs;

    employee *ptr;
    ptr = &n;

    output << "Enfermeira: " << n.getNome() << endl;
    output << " Salario Base: $" << ptr->getSalary() << endl;
    output << " Salario: $" << n.getSalary() << endl;
    output << " Especializacao: " << n.getEspecialization() << endl;
    output << " Sala: " << n.getRoom() << endl;
    output << " Horas Semanais: " << n.getWeekHours() << " Horas";
        while(i < nurs.pacients.size()){
        paciente data = nurs.pacients[i];
        output << "\n - " << data.getNome();
     i++;

}
 return output;
}
