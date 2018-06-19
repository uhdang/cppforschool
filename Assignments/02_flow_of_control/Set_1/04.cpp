#include <iostream>
using namespace std;

int main() {
    double c, s;
    cout << "cost price and selling price in order: \n";
    cin >> c >> s;
    if (s - c >= 0) {
        cout << "Profit: " << s-c << "\n";
    } else {
        cout << "Deficit: " << c-s << "\n";
    }
    return 0;
}
