// alphabet, digit and special character
#include <iostream>
using namespace std;

int main() {
    char a;
    cout << "Enter a character: ";
    cin >> a;
    if (int(a) >=  48 && int(a) <= 57) {
        cout << "digit\n";
    } else if ((int(a) >= 65 && int(a) <= 90) || (int(a) >= 97 && int(a) <= 122)) {
        cout << "alphabet\n";
    } else {
        cout << "special character\n";
    }

    return 0;
}
