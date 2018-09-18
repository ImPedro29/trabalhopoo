#include <iostream>
#include "employee.h"
#include "moment.h"
#include "doctor.h"
#include "nurse.h"

using namespace std;

int main(){

moment m1(2000, 9, 29, 1, 34);
moment m2(2004, 9, 19, 22, 12);

nurse p1("Doido", "Rua sei la, 1111", "2006454781", m1, 2000, 45, m2, "d32", "rola", 30);

cout << "Nome:" << p1.getNome() << endl;
cout << "End:" << p1.getEndereco() << endl;
cout << "RG:" << p1.getRg() << endl;
cout << "Nascimento:" << p1.getNascimento().getDay() << "/"<< p1.getNascimento().getMon() << "/" << p1.getNascimento().getYear() << endl;
cout << "Salario:" << p1.getSalary() << endl;
cout << "Especializacao:" << p1.getEspecialization() << endl;
cout << "Room:" << p1.getRoom() << endl;

employee *ptr;
ptr = &p1;

cout << ptr->getSalary();
return 0;
}

