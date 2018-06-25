#include <iostream>
using namespace std;

int main() {
    int n;
    string m = "";
    cin >> n;
    int l = (int)to_string(n).length();

    for (int i = l-1; i >= 0; i--) {
        m += to_string(n)[i];
    }
    cout << stoi(m) << endl;

}
