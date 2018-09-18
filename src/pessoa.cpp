#include <iostream>
#include "pessoa.h"

pessoa::pessoa(){
    nome="";
    endereco="";
    rg="";
};

pessoa::pessoa(const string& p_nome, const string& p_endereco, const string& p_rg, const moment& p_nascimento){
    setNome(p_nome);
    setEndereco(p_endereco);
    setRg(p_rg);
    setNascimento(p_nascimento);
};

void pessoa::setNome(string p_nome){
    nome = p_nome;
};

string pessoa::getNome(){
    return nome;
};

void pessoa::setNascimento(moment p_nascimento){
    nascimento = p_nascimento;
}

moment pessoa::getNascimento(){
    return nascimento;
}

void pessoa::setEndereco (string p_endereco){
    endereco = p_endereco;
};

string pessoa::getEndereco(){
    return endereco;
};

void pessoa::setRg(string p_rg){
    rg = p_rg;
};

string pessoa::getRg(){
    return rg;
};

pessoa::~pessoa(void){
    //Coisas do destrutor
};

