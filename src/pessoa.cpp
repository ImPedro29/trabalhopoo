#include <iostream>
#include "pessoa.h"

pessoa::pessoa(){
    nome="";
    endereco="";
    cpf="";
};

pessoa::pessoa(const string& p_nome, const string& p_endereco, const string& p_cpf){
    setNome(p_nome);
    setEndereco(p_endereco);
    setCpf(p_cpf);
};

void  pessoa::setNome(string p_nome){
    nome = p_nome;
};

string pessoa::getNome(){
    return nome;
};

void pessoa::setEndereco (string p_endereco){
    endereco = p_endereco;
};
string pessoa::getEndereco(){
    return endereco;
};

void pessoa::setCpf(string p_cpf){
    cpf = p_cpf;
};

string pessoa::getCpf(){
    return cpf;
};

pessoa::~pessoa(void){
    //Coisas do destrutor
};

