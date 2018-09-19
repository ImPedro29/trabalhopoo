#include "paciente.h"

paciente::paciente(const string& p_nome, const string& p_endereco, const string& p_rg , const moment& p_nascimento, const string& p_disease, const doctor& p_doct) : pessoa(p_nome, p_endereco, p_rg, p_nascimento){
    setDisease(p_disease);
    setDoctor(p_doct);
}

void paciente::setDisease(string p_disease){
    disease = p_disease;
}

string paciente::getDisease(){
    return disease;
}

void paciente::setDoctor(doctor p_doct){
    doct = p_doct;
}

doctor paciente::getDoctor(){
    return doct;
}
