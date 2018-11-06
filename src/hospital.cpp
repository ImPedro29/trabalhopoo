#include "hospital.h"
#include <fstream>

using namespace std;

hospital::hospital(const vector<doctor>& p_doctors, const vector<nurse>& p_nurses, const vector<employee>& p_employees, const vector<paciente>& p_pacients){
    doctors = p_doctors;
    nurses = p_nurses;
    employees = p_employees;
    pacients = p_pacients;
}

vector<doctor> hospital::getDoctors(){
    return doctors;
}

ostream &operator<<( ostream &output, const hospital &hos){
    for(int i = 0; i < hos.doctors.size(); i++){
        doctor d = hos.doctors[i];
        employee *ptr;
        ptr = &d;
        output << "Medicos:\n -" << d.getNome() << ": \n  Sal. Base: $" << ptr->getSalary() << "\n  Salario: $" << d.getSalary() << "\n  Endereco: " << d.getEndereco() << "\n  RG: " << d.getRg() << "\n  Horas trabalhadas: " << d.getWeekHours() << "\n  Especializacao: " << d.getEspecialization() << endl;
    }
    for(int i = 0; i < hos.nurses.size(); i++){
        nurse n = hos.nurses[i];
        employee *ptr;
        ptr = &n;
        output << "Enfermeiras:\n -" << n.getNome() << ": \n  Sal. Base: $" << ptr->getSalary() << "\n  Salario: $" << n.getSalary() << "\n  Endereco: " << n.getEndereco() << "\n  RG: " << n.getRg() << "\n  Horas trabalhadas: " << n.getWeekHours() << "\n  Especializacao: " << n.getEspecialization() << "\n  Sala: " << n.getRoom() << endl;
    }
    for(int i = 0; i < hos.employees.size(); i++){
        employee e = hos.employees[i];
        output << "Servicos Gerais:\n -" << e.getNome() << ": \n  Salario: $" << e.getSalary() << "\n  Endereco: " << e.getEndereco() << "\n  RG: " << e.getRg() << "\n  Horas trabalhadas: " << e.getWeekHours() << "\n  Sala: " << endl;
    }
    return output;
}

void hospital::generatePayment(){
    ofstream hFile;
    hFile.open("payroll.txt");
    for(int i = 0; i < doctors.size(); i++){
        doctor d = doctors[i];
        employee *ptr;
        ptr = &d;
        cout << "Medico: " << d.getNome() << "| Sal. Base: $" << ptr->getSalary() << "| Salario: $" << d.getSalary() << endl;
        hFile << "Medico: " << d.getNome() << "| Sal. Base: $" << ptr->getSalary() << "| Salario: $" << d.getSalary() << endl;
    }
    for(int i = 0; i < nurses.size(); i++){
        nurse n = nurses[i];
        employee *ptr;
        ptr = &n;
        cout << "Nurse: " << n.getNome() << "| Sal. Base: $" << ptr->getSalary() << "| Salario: $" << n.getSalary() << endl;
        hFile << "Nurse: " << n.getNome() << "| Sal. Base: $" << ptr->getSalary() << "| Salario: $" << n.getSalary() << endl;
    }
    for(int i = 0; i <employees.size(); i++){
        employee e = employees[i];
        cout << "Employee: " << e.getNome() << "| Salario: $" << e.getSalary() << endl;
        hFile << "Employee: " << e.getNome() << "| Salario: $" << e.getSalary() << endl;
    }
    hFile.close();

}

void hospital::save(){
    ofstream hFile;
    hFile.open("hospital.txt");
    for(int i = 0; i < doctors.size(); i++){
        doctor d = doctors[i];
        employee *ptr;
        ptr = &d;
        hFile << "doctor:\n " << i << ": \n  " << d.getNome() << "\n  " << d.getEndereco() << "\n  " << d.getRg() << "\n  " << d.getNascimento() << "\n " << d.getSalary() << "\n  " << d.getWeekHours() << "\n  " << d.getEntryDate() << "\n  " << d.getEspecialization() << "\n  ";
        //const string& p_nome, const string& p_endereco, const string& p_rg , const date& p_nascimento, const float& p_salary, const int& p_weekHours, const date& p_entryDate, const string& p_especialization, const float& p_plantao, const vector<paciente>& p_pacients) : employee(p_nome, p_endereco, p_rg , p_nascimento, p_salary, p_weekHours, p_entryDate){
    }
    hFile.close();
}

