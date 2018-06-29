#include <iostream>
using namespace std;

int main() {
    int t = 5, k = 1, l = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < t; j++) {
            cout << " ";
        }
        for (int j = 0; j < k; j++) {
            cout << l;
        }
        l++;
        k+=2;
        t--;
        cout << "\n";
    }
    return 0;
}
