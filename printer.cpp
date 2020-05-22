//
// Created by Arias Arevalo, Carlos on 5/22/20.
//

#include "printer.h"

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;


void Printer::DoSomething(const Object *object) const {
	cout << setw(40) << object->ToString() << endl;
}
