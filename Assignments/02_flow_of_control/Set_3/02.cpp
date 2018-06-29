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
    int x, n, m = 1;
    float sin = 0;
    cout << "Provide x and n in order(n has to be odd number): ";
    cin >> x >> n;
    for (int i = 1; i <= n; i+=2) {
        sin += m * pow(x, i)/factorial(i);
        m *= -1;
    }
    cout << sin << endl;
    return 0;
}
