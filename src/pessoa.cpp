#include <iostream>
#include "pessoa.h"
#include "date.h"

 pessoa::pessoa(){
    nome="";
   // dt_nascimento=date(01,01,01);
    endere�o="";
    cpf="";
};
pessoa::pessoa(const string& p_nome, const string& p_endere�o, const string& p_cpf){
    //const date& p_dt_nascimento
    setNome(p_nome);
   // setDt_nascimento(p_dt_nascimento);
    setEndere�o(p_endere�o);
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

void pessoa::setEndere�o (string p_endere�o) {
        endere�o = p_endere�o;
    };
string pessoa::getEndere�o() {
        return endere�o;
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

