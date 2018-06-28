#include <iostream>
using namespace std;

int main() {
    float n, sum = 0.0;
    cout << "Input: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += 1.0/i;
    }
    cout << sum << endl;
    return 0; 
}
