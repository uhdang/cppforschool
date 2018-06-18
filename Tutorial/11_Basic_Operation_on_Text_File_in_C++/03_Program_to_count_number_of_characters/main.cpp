#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream fin;
    fin.open("out.txt");

    char ch;
    int c = 0;

    while (!fin.eof()) {
        fin.get(ch);
        c++;
    }

    fin.close();

    cout << "count: " << c << "\n";
    return 0;
        

};
