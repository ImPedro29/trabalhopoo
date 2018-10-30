#include <iostream>
#include "employee.h"
#include "moment.h"
#include "doctor.h"
#include "nurse.h"
#include "paciente.h"
#include <vector>

using namespace std;

int main(){

    moment m1(2000, 9, 29, 1, 34);
    moment m2(2004, 9, 19, 22, 12);
    moment m3(2025, 1, 5, 2, 11);

    paciente p1("Fernando ALvarenga", "Rua Albergue, 1231", "20064054781", m1, "Gripe");
    paciente e1("Pedro Bundinha", "Rua Albergue, 1231", "20064054781", m1, "Gonorreia");
    paciente h1("Halison Roludo", "Rua Albergue, 1231", "20064054781", m1, "AIDS");

    vector<paciente> jj;

    jj.push_back(e1);
    jj.push_back(p1);
    jj.push_back(h1);

    nurse n2("Jurema assis", "rua bilubilu", "425641685", m1, 2145, 50, m2, "qualquercoisa", "limpamerda", 2, jj);

    cout << n2 << endl;

    doctor d1("Gabriel Toledo", "Rua Almirante, 1212", "201948592", m2, 12300, 100, m3, "Clinico Geral", 24, jj);

    employee *ptr;
    ptr = &d1;

    e1.setDoctorName(d1.getNome());
    p1.setDoctorName(d1.getNome());
    h1.setDoctorName(d1.getNome());

    e1.setNurseName(n2.getNome());
    p1.setNurseName(n2.getNome());
    h1.setNurseName(n2.getNome());


    cout << d1;

    cout << e1;

    return 0;
}

