#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream fin;
    fin.open("out.txt");

    int count = 0;
    char str[30];

    while(!fin.eof()) {
        fin.getline(str,80);
        count++;
    }
    cout << "Num of lines: " << count << "\n";
    fin.close();
    return 0;

}
