#include <iostream>
#include "Conversion.h"
using namespace std;

Conversion :: Conversion(const int f, const int i)
    : feet(f), inch(i) {}

void Conversion :: setConversion(const int f, const int i) {
    feet = f;
    inch = i;
}

double Conversion :: fromFtToInch() {
    return feet * ft_to_inch;
}

double Conversion :: fromFeetAndInchToCm() {
    double all_inch = (feet > 0 ? fromFtToInch() + inch : inch);
    cout << feet << " : " << inch << "\n";
    cout << "all_inch: " << all_inch << "\n";
    return all_inch * inch_to_cm;
}

