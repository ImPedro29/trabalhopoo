#include "paciente.h"

paciente::paciente(const string& p_nome, const string& p_endereco, const string& p_rg , const moment& p_nascimento, const string& p_disease) : pessoa(p_nome, p_endereco, p_rg, p_nascimento){
    setDisease(p_disease);
}

void paciente::setDisease(string p_disease){
    disease = p_disease;
}

string paciente::getDisease(){
    return disease;
}

void paciente::setDoctorName(string p_doctorName){
    doctorName = p_doctorName;
}

string paciente::getDoctorName(){
    return doctorName;
}

void paciente::setNurseName(string p_nurseName){
    nurseName = p_nurseName;
}

string paciente::getNurseName(){
    return nurseName;
}

ostream &operator<<( ostream &output, const paciente &paci )
{
    paciente p = paci;


    output << "Paciente: " << p.getNome() << endl;
    output << " Medico: " << p.getDoctorName() << endl;
    output << " Enfermeira: " << p.getNurseName() << endl;
    output << " Doenca: " << p.getDisease() << endl;
    output << " Geracao: " << p.getNascimento().getYear() << endl;
}
