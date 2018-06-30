#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float p, r, t, ci;
    cout << "Input P(principal), R(rate), and T(time) in order: ";
    cin >> p >> r >> t;
    
    ci = (p * pow(1 + r / 100, t) - p);
    cout << ci << endl;
    return 0; 
}
