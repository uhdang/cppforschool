#include <iostream>
using namespace std;

int main() {
    double q, p;
    cout << "Input Quantity and Price: \n";
    cin >> q >> p;
    cout << (q*p > 5000 ?  q*p*0.9 : q*p) << "\n";
}
