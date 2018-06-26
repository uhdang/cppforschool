#include <iostream>
using namespace std;

int main() {
    int max = 0, min = 0;
    bool con = true;
    while (con == true) {
        int t;
        cin >> t;
        if (t < min)
            min = t;
        if (t > max)
            max = t;

        cout << "continue? (1 = yes, 0 = no)\n";
        cin >> con;
    }
    cout << "Max: " << max << " - Min: " << min << endl;
    return 0;
}
