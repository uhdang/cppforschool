/*
 * Purpose: This program converts measurements in feet and inches
 * into centimeters.
 *
 */

#include <iostream> 
using namespace std;

const double CENTIMETERS_PER_INCH = 2.54;
const int INCHES_PER_FOOT = 12;

int main() {
    int feet, inches;
    int totalInches;
    double centimeter;
    cout << "Feet -> Inches: ";
    cin >> feet >> inches;
    cout << "Centerimeter: " << CENTIMETERS_PER_INCH * (INCHES_PER_FOOT * feet + inches) << "\n";
     
}
