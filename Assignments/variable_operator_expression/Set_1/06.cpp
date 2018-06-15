#include <iostream>

using namespace std;

int main() {
    char a;
    cin >> a;
    cout << (int)a << "\n";

    cout <<static_cast<int>(a) << "\n"; // solution
}
