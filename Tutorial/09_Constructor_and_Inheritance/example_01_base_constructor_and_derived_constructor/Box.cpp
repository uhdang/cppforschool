#include <iostream>
#include "Box.h"

Box :: Box() {
    height = 0;
}

Box :: Box(float len, float wid, float ht) : Rectangle(len, wid) {
    height = ht;
}

float Box :: volume() {
    return area() * height;
}
