/*
 * The compiler automatically calls a base class constructor before executing the derived class constructor.
 * The compiler's default action is to call the default constructor in the base class. You can specify which
 * of several base class constructors should be called during the creation of a derived class object.
 *
 * This is done by specifying the arguments to the selected base class constructor in the definition of the derived class constructor.
 */



#include <iostream>
#include "Box.h"

int main() {
    Box bx;
    Box cx(4,8,5);
    cout << bx.volume() << "\n";
    cout << cx.volume() << "\n";
    return 0;
}
