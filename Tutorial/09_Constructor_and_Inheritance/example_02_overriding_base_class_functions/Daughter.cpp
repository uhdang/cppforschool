#include <iostream>
#include "Daughter.h"
using namespace std;

void daughter :: display() {
    cout << "daughter : display function\n\n";
    mother :: display();
};
