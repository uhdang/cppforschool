#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "Year: " << n/365 << "\n";
    n%=365;
    cout << "Month: " << n/30 << "\n";
    n%=30;
    cout << "Day: " << n << "\n";
    return 0;
}
