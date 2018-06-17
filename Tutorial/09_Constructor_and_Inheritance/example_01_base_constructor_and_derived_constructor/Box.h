#ifndef BOX_H
#define BOX_H
#include <iostream>
#include "Rectangle.h"
using namespace std;

class Box : public Rectangle {
    private:
        float height;
    public:
        Box();
        Box(float len, float wid, float ht);
        float volume();
};

#endif
