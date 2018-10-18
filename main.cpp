#include <iostream>
#include "employee.h"
#include "moment.h"
#include "doctor.h"
#include "nurse.h"
#include "paciente.h"

using namespace std;

int main(){

moment m1(2000, 9, 29, 1, 34);
moment m2(2004, 9, 19, 22, 12);
moment m3(2025, 1, 5, 2, 11);

doctor d1("Gabriel Toledo", "Rua Almirante, 1212", "201948592", m2, 12300, 100, m3, "Clinico Geral", 24);
paciente p1("Fernando ALvarenga", "Rua Albergue, 1231", "20064054781", m1, "Gripe", d1);

cout << "Nome: " << p1.getNome() << endl;
cout << "End: " << p1.getEndereco() << endl;
cout << "RG: " << p1.getRg() << endl;
cout << "Nascimento: " << p1.getNascimento().getDay() << "/"<< p1.getNascimento().getMon() << "/" << p1.getNascimento().getYear() << endl;
cout << "Doenca: " << p1.getDisease() << endl;
cout << "Nome do medico: " << p1.getDoctor().getNome() << endl;

employee *ptr;
ptr = &d1;

cout << "\nMedico:" << endl;
cout << "Salario Bruto: " << ptr->getSalary() << endl;
cout << "Salario Liquido:" << p1.getDoctor().getSalary() << endl;
cout << "Especializacao: " << p1.getDoctor().getEspecialization() << endl;
return 0;
}

