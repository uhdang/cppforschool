#include <iostream>
using namespace std;
// Highest Common Factor

int main() {
    int m, n, f;
    cout << "input two integers: \n";
    cin >> m >> n;
    f = (m > n ? n : m);
    for (int i = f; i > 0; i--) {
        if (m%i==0 && n%i==0) {
            f = i;
            break;
        }
    }
    cout << f << "\n";
    return 0;
}
