#include <iostream>

using namespace std;

int main() {
    // 1)
    //int x = 10, y;
    //y = x + x++;
    //cout << y;
    //
    // 2)
    int x= 10, y;
    y = ++x + x++ + x;
    cout << y;
}
