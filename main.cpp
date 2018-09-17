#include <iostream>
#include "pessoa.h"
#include "moment.h"

using namespace std;

int main(){

pessoa p1("Doido", "Rua sei la, 1111", "079.349.183-56");
moment m1(true);


int a = m1.getYear();

cout << a;

return 0;
}

