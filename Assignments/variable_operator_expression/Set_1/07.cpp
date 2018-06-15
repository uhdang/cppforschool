#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "BEFORE\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "AFTER\n";
    cout << "a: " << a << " b: " << b << "\n";


}
