#include <iostream>
#include "Conversion.h"

using namespace std;

int main() {
    int f, i;
    cout << "Feet: ";
    cin >> f;
    cout << "Inch: ";
    cin >> i;

    Conversion c1;
    c1.setConversion(f,i);
    cout << "Converted: " << c1.fromFeetAndInchToCm() << "\n";
    

}
