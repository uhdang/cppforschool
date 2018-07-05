#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char a;
    cout << "Input a character: ";
    cin >> a;
    if (isalpha(a)) {
        cout << "Alphabet\n";
    } else if (isdigit(a)) {
        cout << "Digit\n";
    } else {
        cout << "Special Character\n";
    }
    return 0;
}
