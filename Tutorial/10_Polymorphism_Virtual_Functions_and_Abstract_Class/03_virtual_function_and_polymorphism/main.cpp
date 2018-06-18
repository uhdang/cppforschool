/*
 * Virtual functions are used in C++ to support polymorphic behavior.
 * We are motifying the above program and will introduce you the
 * concept of virtual function by following example
 */

#include <iostream>
#include "Rectangle.h"
#include "Shape.h"

using namespace std;

int main() {
    Shape *sPtr;
    Rectangle Rect;
    sPtr = &Rect;

    sPtr -> set_data (5,3);
    cout << sPtr -> area() << endl;
    return 0;
};
