#include <iostream>
using namespace std;

int main() {
    float sum = 0, a;
    for (int i = 0; i < 5; i++) {
        float t;
        cin >> t;
        sum += t;
    }
    a = sum / 5;

    if (a >= 60)
        cout << "FIRST\n";
    else if (a >= 50)
        cout << "SECOND\n";
    else if (a >= 40)
        cout << "THIRD\n";
    else
        cout << "FAIL\n";
}
