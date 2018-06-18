#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape {
    protected:
        double width, height;
    public:
        void set_data(double a, double b);

        virtual double area();
};
#endif
