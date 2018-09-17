#ifndef _PESSOA_H_
#define _PESSOA_H_

#include <iostream>
#include <string>

using namespace std;

class pessoa {
    private:
        string nome;
        string endereco;
        string cpf;
    public:
        pessoa();
        virtual ~pessoa();
        pessoa(const string& p_nome, const string& p_endereco, const string& cpf );

        void setNome (string p_nome);
        string getNome ();

        void setEndereco (string p_endereco);
        string getEndereco();

        void setCpf(string p_cpf);
        string getCpf();
    };

#endif
