#ifndef _PESSOA_H_
#define _PESSOA_H_

#include <iostream>
#include <string>
#include "date.h"
using namespace std;
class pessoa {
    private:
        string nome;
        //date dt_nascimento;
        string endere�o;
        string cpf;
  public:
   pessoa();
   ~pessoa();
   pessoa(const string& p_nome, const string& p_endere�o, const string& cpf );
    //const date& p_dt_nascimento
    void setNome (string p_nome);
    string getNome ();
    //void setDt_nascimento (date dt_nascimento);
    //date getDt_nascimento();
    void setEndere�o (string p_endere�o);
    string getEndere�o();
    void setCpf(string p_cpf);
    string getCpf();
};
 #endif
