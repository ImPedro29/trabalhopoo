#include <iostream>
#include "pessoa.h"
#include "date.h"

 pessoa::pessoa(){
    nome="";
   // dt_nascimento=date(01,01,01);
    enderešo="";
    cpf="";
};
pessoa::pessoa(const string& p_nome, const string& p_enderešo, const string& p_cpf){
    //const date& p_dt_nascimento
    setNome(p_nome);
   // setDt_nascimento(p_dt_nascimento);
    setEnderešo(p_enderešo);
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

void pessoa::setEnderešo (string p_enderešo) {
        enderešo = p_enderešo;
    };
string pessoa::getEnderešo() {
        return enderešo;
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

