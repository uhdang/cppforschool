#include <iostream>
#include <cctype>
using namespace std;

int main() {
    cout << "Give a character: ";
    char a;
    cin >> a;
    cout << (char)toupper(a) << endl;

}
