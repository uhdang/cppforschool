#include <iostream>
using namespace std;

int main() {
    bool con = true;
    int p = 0, n = 0, z = 0;
    while (con == true) {
        int t;
        cin >> t;
        if (t > 0) {
            p++;
        } else if (t < 0) {
            n++;
        } else {
            z++;
        }

        cout << "Continue?(yes = 1, no = 0)\n";
        cin >> con;
    }
    cout << "p, n, z in order: " << p << " : " << n << " : " << z << "\n";
    return 0;

}
