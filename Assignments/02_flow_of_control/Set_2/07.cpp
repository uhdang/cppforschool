#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << (isPrime ? "PRIME" : "NOT") << endl;
    return 0;
}
