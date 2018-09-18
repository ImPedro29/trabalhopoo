#include <iostream>
#include "employee.h"
#include "moment.h"

using namespace std;

int main(){

moment m1(2000, 9, 29, 0, 0);
employee p1("Doido", "Rua sei la, 1111", "2006454781", m1, 300, 3, m1);

cout << p1.getSalary();

return 0;
}

