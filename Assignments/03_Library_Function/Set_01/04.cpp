#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    cout << rand() % 100 + 10 << endl; 
}

