#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream fin;
    fin.open("out.txt");

    int count = 0;
    char word[30];

    while (!fin.eof()) {
        fin >> word;
        count++;
    }

    cout << "Num of words: " << count << "\n";
    fin.close();
    return 0;

}
