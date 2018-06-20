#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "enter three angles for a triangle: \n";
    cin >> a >> b >> c;
    cout << ((a+b+c == 180)?"VALID":"INVALID") << endl;
    return 0;
}
