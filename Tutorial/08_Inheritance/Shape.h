#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape {
    protected:
        float width, height;
    public:
        void set_data (float a, float b);
};

#endif
