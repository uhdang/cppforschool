#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int i = 1; i <= 500; i++) {
        string s = to_string(i);
        int sum = 0;
        for (int j = 0; j < (int)s.length(); j++) {
            int d = s[j] - '0';
            //cout << "digit: " << d << " : cube: " << d*d*d << endl;
            sum += d*d*d;
        }
        //cout << sum << endl;
        if (sum == i) {
            cout << "Armstrong num: " << i << endl;
        } else {
            //cout << "NOT: " << i << endl;
        }
    }

}
