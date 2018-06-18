#include <iostream>
#include "Rectangle.h"
#include "Shape.h"
using namespace std;

int main() {
    Shape *sPtr;
    Rectangle Rect;
    sPtr = &Rect;

    sPtr->set_data(5,3);
    cout << static_cast <Rectangle *> (sPtr) -> area() << endl;
    /*
     * The type cast informs the compiler that sPtr is actually pointing to a Rectangle object derivced from the Shape base class.
     * In general, *a pointer to a base class that actually points to a derived class object must first be appropriately cast before the additional features of the derived class can be used.*
     */

    return 0;
};


