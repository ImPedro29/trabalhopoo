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
        string enderešo;
        string cpf;
  public:
   pessoa();
   ~pessoa();
   pessoa(const string& p_nome, const string& p_enderešo, const string& cpf );
    //const date& p_dt_nascimento
    void setNome (string p_nome);
    string getNome ();
    //void setDt_nascimento (date dt_nascimento);
    //date getDt_nascimento();
    void setEnderešo (string p_enderešo);
    string getEnderešo();
    void setCpf(string p_cpf);
    string getCpf();
};
 #endif
