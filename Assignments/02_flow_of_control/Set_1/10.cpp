/*
 * Write a program to find the roots of a quadratic equation of ax2+bx+c where a is not zero.
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, c, d, r1, r2;
    cout << "Give a, b, c value: \n";
    // ax2+bx+c
    cin >> a >> b >> c;
    // Quadratic Equation: (-b +- root(b*b-4*a*c)) / 2a 
    // what should be noted is the value of b*b-4*a*c. This will be noted as d.
     d = b*b-4*a*c;
     // now separate cases for d >= 0, d < 0;
     if (d >= 0) {
         r1 = (-b + sqrt(b*b-4*a*c)) / 2*a;
         r2 = (-b - sqrt(b*b-4*a*c)) / 2*a; 
         cout << "r1 and r2 are real number: " << r1 << " : " << r2 << "\n";
     } else {
         cout << "imaginary number (not real number)\n";
     }
     return 0;
}
