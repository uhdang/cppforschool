#include <iostream>
using namespace std;

int main() {
    int n, s = 0;
    cin >> n;
    string stringified = to_string(n);
    for (int i = 0; i < (int)stringified.length(); i++) {
        s += stringified[i] - 48;
    }
    cout << s << "\n";
}
