#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int x, n, m = -1;
    float cos = 1.0;
    cout << "Provide x and n in order(n has to be odd number): ";
    cin >> x >> n;
    for (int i = 2; i <= n; i+=2) {
        cos += m * pow(x, i)/factorial(i);
        m *= -1;
    }
    cout << cos << endl;
    return 0;
}
