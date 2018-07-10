#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Character: ";
    ch = getchar();
    ch = toupper(ch);
    cout << ch << endl;

    return 0;
}
