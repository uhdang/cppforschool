#include <iostream>
using namespace std;

int main() {
    int pre = 0, one = 1, n;
    cout << "Input terms: \n";
    cin >> n;
    if (n > 2) {
        cout << 0 << 1;
        for (int i = 2; i < n; i++) {
            int output = pre + one;
            pre = one;
            one = output;
            cout << output;
        }
        cout << "\n";

    } else if (n == 1) {
        cout << 0 << endl;
    } else if (n == 2) {
        cout << 0 << 1 << endl;
    }
    return 0;
}
