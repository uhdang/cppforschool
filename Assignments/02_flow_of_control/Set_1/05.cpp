#include <iostream>
using namespace std;

int main() {
    int r, s, a;
    cout << "Input ages of Ram, Sulabh, and Ajay in order: \n";
    cin >> r >> s >> a;
    cout << ((r < s && r < a) ? "Ram" : (s < a) ? "Sulabh" : "Ajay" ) << "\n";

}
