#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string s1;
    
    ofstream fout("b_4_output.txt");
    if (!fout) {
        cout << "Error" << endl;
        exit(100);
    }

    ifstream fin("b_4_input1.txt");
    if (!fin) {
        cout << "Error" << endl;
        exit(100);
    }
    while (getline(fin, s1)) {
        fout << s1 << endl;
    }
    fin.close();

    fout << endl;

    ifstream fin2("b_4_input2.txt");
    if (!fin2) {
        cout << "Error" << endl;
        exit(100);
    }
    while (getline(fin2, s1)) {
        fout << s1 << endl;
    }
    fin2.close();

    fout.close();

    return 0;
}