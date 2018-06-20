// Condition for leap year is
// - Evenly divisible by 4
// - If the year can be evenly divided by 100, it is NOT a leap year
// - the year is also evenly divisible by 400. Then it is a leap year
#include <iostream>
using namespace std;

/*
int main() {
    int y;
    cout << "Year: " << "\n";
    cin >> y;
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                cout << "LEAP YEAR\n";
            } else {
                cout << "NOT Leap Year\n";
            }
        } else {
            cout << "LEAP YEAR\n";
        }
    } else {
        cout << "NOT Leap Year\n";
    }
}
*/


// Given Solution
int main() {
    int y;
    cout << "Year: ";
    cin >> y;
    if ((y%400==0||y%100!=0) && (y%4==0))
        cout << "LEAP\n";
    else 
        cout << "NOT LEAP\n";
    return 0;
}
