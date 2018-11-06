#include <iostream>
#include "employee.h"
#include "date.h"
#include "doctor.h"
#include "nurse.h"
#include "paciente.h"
#include "event.h"
#include <vector>
#include <cstdlib>
#include "universalException.h"
#include <ctime>
#include <string>
#include "hospital.h"

using namespace std;

int actualMenu = 0;

void showMenu(int n){
    cout << "=================================================" << endl;
    cout << "=================== HOSPITAL ====================" << endl;
    cout << "=================================================" << endl;
    cout << "\n Sistema de administracao hospital utilize os" << endl;
    cout << "comandos abaixo para manipular o sistema.\n\n" << endl;
    switch(n){
        case 1: // Menu Principal
            cout << "1. Funcionarios" << endl;
            cout << "2. Pacientes" << endl;
            cout << "3. Log de Erro" << endl;
            cout << "4. Administracao" << endl;
            cout << "5. Salvar Hospital" << endl;
            break;
        case 2: // Menu Funcionarios
            cout << "Comandos abaixo referentes aos funcionarios" << endl;
            cout << "\n1. Adicionar" << endl;
            cout << "2. Remover" << endl;
            cout << "3. Limpar Lista" << endl;
            cout << "4. Visualizar Lista" << endl;
            break;
        case 3: // Menu Pacientes
            cout << "Comandos abaixo referentes aos pacientes" << endl;
            cout << "\n1. Adicionar" << endl;
            cout << "2. Remover" << endl;
            cout << "3. Limpar Lista" << endl;
            cout << "4. Visualizar Lista" << endl;
            break;
        case 4: // Log de Erro
            cout << "Comandos abaixo referentes a LOG de erros" << endl;
            cout << "\n1. Visualizar" << endl;
            cout << "2. Limpar" << endl;
            break;
        case 5: // Adminstração
            cout << "Comandos para administracao do hospital" << endl;
            cout << "\n1. Gerar Folha de Pagamento" << endl;
            cout << "2. Gerar Evento" << endl;
            cout << "3. Lista de Eventos" << endl;
            break;
        case 6: //Digiteação de dados FUNCIONARIO
            cout << "DIGITE ABAIXO OS DADOS DO FUNCIONARIO: " << endl;
            cout << "Nome, Tipo, Salario, Endereco, RG, CPF, Data de Nascimento,"<< endl;
            cout << "Data de Entrada, Horas Semanais, Especializacao (Se Aplicavel), Horas de Plantao e Sala." << endl;
            cout << "Fomato da data: DD/MM/AAAA" << endl;
            break;
        case 7: // Remoção de Pessoa
            cout << "Das pessoas mostradas acima digite o numero da que deseja remover:" << endl;
            break;
        case 8: // Confirmação
            cout << "Digite 1 para confirmar a acao" << endl;
            break;
        case 9: // Adicionar Paciente
            cout << "DIGITE ABAIXO OS DADOS DO PACIENTE: " << endl;
            cout << "Nome, Endereco, RG, Data de Nascimento, Doenca, CPF, Data de Nascimento, Nome do Medico, Nome da Enfermeira "<< endl;
            cout << "Fomato da data: DD/MM/AAAA" << endl;
            break;
        case 10:
            cout << "DIGITE AS INFORMAÇÕES NA SEGUINTE ORDEM (SEPARANDO POR VIRGULA):" << endl;
            cout << "Numero correspondente ao paciente do ocorrido, evento ocorrido, data" << endl;
            cout << "Fomato da data: HH:MM DD/MM/AAAA" << endl;
            break;
        case 11:
            cout << "HOSPITAL SALVO COM SUCESSO!" << endl;
            break;
    }
    cout << "\n0. Voltar para menu principal" << endl;
    cout << "CTRL + C. Encerrar programa" << endl;
    cout << "MENU ATUAL: " << actualMenu << endl;
}

int main(){
    date m1(2000, 9, 29, 1, 34);
    date m2(2004, 9, 19, 22, 12);
    date m3(2025, 1, 5, 2, 11);

    vector<employee> epls;
    employee e1("Vanderlei", "Rua Geraldo Basto, 11", "1512352", m1, 1300, 25, m2);
    employee e2("Bin Laden", "Av. Frederico, 2312", "2341234", m1, 1500, 25, m2);
    epls.push_back(e1);
    epls.push_back(e2);

    paciente a("Lucas Alvarenga", "Rua Albergue, 1231", "20064054781", m1, "Gripe");
    paciente b("Pedro Bundi", "Rua Albergue, 1231", "20064054781", m2, "Trombose");
    paciente c("Halison Roll", "Rua Albergue, 1235", "20064054781", m3, "Doença Mental");

    vector<paciente> pacs;
    pacs.push_back(a);
    pacs.push_back(b);
    pacs.push_back(c);

    vector <doctor> dcs;
    doctor d1("Geraldo", "Rua Lima Ferreira", "65476123", date(1963, 5, 23, 12, 44), 10000, 12, date(1993, 1, 2, 22, 10), "Clinico Geral", 12, pacs);
    doctor d2("Gerida", "Rua Lima Ferreira", "65476123", date(1963, 5, 23, 12, 44), 10000, 12, date(1993, 1, 2, 22, 10), "Clinico Geral", 12, pacs);
    doctor d3("Bandind", "Rua Lima Ferreira", "65476123", date(1963, 5, 23, 12, 44), 10000, 12, date(1993, 1, 2, 22, 10), "Clinico Geral", 12, pacs);

    dcs.push_back(d1);
    dcs.push_back(d2);
    dcs.push_back(d3);

    vector <nurse> nrs;
    nurse n1("Samia", "Rua Lima Ferreira", "65476123", date(1963, 5, 23, 12, 44), 10000, 12, date(1993, 1, 2, 22, 10), "B01", "Clinico Geral", 12, pacs);
    nurse n2("Guga", "Rua Lima Ferreira", "65476123", date(1963, 5, 23, 12, 44), 10000, 12, date(1993, 1, 2, 22, 10), "B03", "Clinico Geral", 12, pacs);
    nurse n3("Bandind", "Rua Lima Ferreira", "65476123", date(1963, 5, 23, 12, 44), 10000, 12, date(1993, 1, 2, 22, 10), "B07", "Clinico Geral", 12, pacs);

    nrs.push_back(n1);
    nrs.push_back(n2);
    nrs.push_back(n3);

    hospital h1(dcs, nrs, epls, pacs);

    showMenu(1);

    int input;
    /*
        PRINCIPAL -> 0
        PACIENTES -> 1
        FUNCIONARIOS -> 2
        LOG DE ERRO -> 3
        ADMINSITRAÇÃO -> 4
        VOLTAR PARA O ZERO NA PRÓXIMA VEZ -> 64
    */

    while (cin >> input){
        if(actualMenu == 64) actualMenu = 0;
        if(input == 0){
            actualMenu = 0;
            showMenu(1);
        }else{
            switch(actualMenu){
                case 0:
                    if(input == 5){
                        showMenu(11);
                        h1.save();}
                    else actualMenu = input;
                    break;
                case 1:
                    if(input == 4) cout << h1;
                    else actualMenu = input + 4;
                    break;
                case 4:
                    if(input == 1) h1.generatePayment();
                    break;
            }
            showMenu(actualMenu + 1);
        }
    }


    return 0;
}
