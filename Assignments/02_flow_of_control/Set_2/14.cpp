#include <iostream>
using namespace std;

int main() {
    cout << "Input: ";
    float s = 0;
    int n, f = -1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        f *= -1;
        s += 1.0 / i * f;
    }
    cout << s << endl;
}
