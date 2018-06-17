#include "Rectangle.h"
using namespace std;

Rectangle :: Rectangle() {
    length = 0;
    width = 0;
}

Rectangle :: Rectangle(float len, float wid) {
    length = len;
    width = wid;
}

float Rectangle :: area() {
    return length * width;
}
