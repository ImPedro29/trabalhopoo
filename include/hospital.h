#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <vector>
#include <stdio.h>
#include <iostream>
#include "doctor.h"
#include "nurse.h"
#include "paciente.h"

using namespace std;

class hospital{

    friend ostream &operator << (ostream &, const hospital &);

    private:
        vector<doctor> doctors;
        vector<nurse> nurses;
        vector<employee> employees;
        vector<paciente> pacients;
    public:
        hospital(const vector<doctor>& p_doctors, const vector<nurse>& p_nurses, const vector<employee>& p_employees, const vector<paciente>& p_pacients);

        vector<doctor> getDoctors();
        vector<nurse> getNurses();
        vector<employee> getEmployees();
        vector<paciente> getPacients();

        void save();
        void generatePayment();

};

#endif // HOSPITAL_H
