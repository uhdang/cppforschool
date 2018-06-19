#include <iostream>

using namespace std;

int main() {
    int r;
    cin >> r;
    cout << "500: " << r/500 << "\n";
    r%=500;
    cout << "100: " << r/100 << "\n";
    r%=100;
    cout << "50: " << r/50 << "\n";
    r%=50;
    cout << "20: " << r/20 << "\n";
    r%=20;
    cout << "10: " << r/10 << "\n";
    r%=10;
    cout << "5: " << r/5 << "\n";
    cout << "1: " << r%5 << "\n";
}
