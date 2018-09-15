#include <iostream>
#include "pessoa.h"
#include "date.h"

 pessoa::pessoa(){
    nome="";
   // dt_nascimento=date(01,01,01);
    endereço="";
    cpf="";
};
pessoa::pessoa(const string& p_nome, const string& p_endereço, const string& p_cpf){
    //const date& p_dt_nascimento
    setNome(p_nome);
   // setDt_nascimento(p_dt_nascimento);
    setEndereço(p_endereço);
    setcpf(p_cpf);
};

void  pessoa::setNome (string p_nome){
    nome = p_nome;
};
 string pessoa::getNome () {
     return nome;
 };

/*void pessoa::setDt_nascimento (date p_dt_nascimento){
    dt_nascimento = p_dt_nascimento;
};
date pessoa::getDt_nascimento() {
    return dt_nascimento;
};
*/

void pessoa::setEndereço (string p_endereço) {
        endereço = p_endereço;
    };
string pessoa::getEndereço() {
        return endereço;
    };

void pessoa::setCpf(string p_cpf){
    cpf=p_cpf;
};
string pessoa::getCpf(){
    return cpf;
};

pessoa::~pessoa(void) {
    cout << "Esse eh o destrutor...desalocando pessoa " << getNome() << endl;
};

