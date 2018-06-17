#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle {
    private:
        float length;
        float width;
    public:
        Rectangle();
        Rectangle(float len, float wid);
        float area();
};

#endif
