#ifndef _PESSOA_H_
#define _PESSOA_H_

#include <iostream>
#include <string>
#include "date.h"

using namespace std;

class pessoa {
    private:
        string nome;
        string endereco;
        string rg;
        date nascimento;
    public:
        pessoa();
        virtual ~pessoa();
        pessoa(const string& p_nome, const string& p_endereco, const string& p_rg , const date& p_nascimento);

        void setNome (string p_nome);
        string getNome();

        void setEndereco (string p_endereco);
        string getEndereco();

        void setRg(string p_rg);
        string getRg();

        void setNascimento(date p_nascimento);
        date getNascimento();
    };

#endif
