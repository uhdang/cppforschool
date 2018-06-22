#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    if (a > 64 && a <91)
        cout << "CAPITAL\n";
    else if (a > 96 && a < 123)
        cout << "lower\n";
    else if (a > 47 && a < 58)
        cout << "num\n";
    else
        cout << "special symbols\n";

    cout << "a: " << a << "\n";
    return 0;
}
