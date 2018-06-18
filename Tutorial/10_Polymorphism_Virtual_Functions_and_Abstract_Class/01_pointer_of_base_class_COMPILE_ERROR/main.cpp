/*
 * In C++, pointer variable of a base class type can point to an object of its derived class.
 * There are situations when this feature of C++ can be used to develop generic code for a variety of applications.
 *
 * Consider the following program to understand pointer compatibility property
 */

#include <iostream>
#include "Rectangle.h"
#include "Shape.h"
using namespace std;

int main() {
    Shape *sPtr; // declare pointer variable of type Shape
    Rectangle Rect; // create the object rect of type Rectangle
    sPtr = &Rect; // make sPtr point to the object rect.

    sPtr->set_data(5,3); // set length and width of object rect
    cout << sPtr -> area() << endl; // Compile Error !!
    return 0;
};

/*
 *Notice that even though rectPtr is pointing to rect (object of type Rectangle), 
 when the program executes, the statement sets length and width of rectangle. If you tried to access area function of class Rectangle with sPtr it will give you compiler error.

It means base class pointer can not access the additional member function of its derived class. If we want to do this we need to type cast the base class pointer.
 */
