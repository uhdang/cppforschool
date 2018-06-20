/*
 * HRA - Housing Rent Allowance
 * Rs - Relative Price Strength
 * DA - Dearness Allowance
 *
 * gross_salary = basic_salary + HRA + DA
 *
 */

#include <iostream>
using namespace std;

int main() {
    const double Rs = 1500;

    double bs, HRA, DA;
    cout << "Basic Salary: ";
    cin >> bs;

    if (bs < 1500) {
        HRA = bs * 0.1;
        DA = bs * 0.9;
    } else {
        HRA = 500;
        DA = bs * 0.98;
    }

    cout << bs + HRA + DA << "\n";
}
