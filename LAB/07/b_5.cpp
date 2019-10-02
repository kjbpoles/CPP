#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int length;
    cout << "length = ";
    cin >> length;

    char c;
    ifstream fin("b_5_input.txt");
    ofstream fout("b_5_output.txt");

    if (!fin || !fout) {
        cout << "Error" << endl;
        exit(100);
    }

    fin.unsetf(ios::skipws);
    while (fin) {
        for (int i = 0; i < length; i++) {
            fin >> c;
            if (c == '\n')
                fout << " ";
            else if (fin == false)
                break;
            else
                fout << c;
        }
        fout << endl;
    }

    fin.close();
    fout.close();
    
    return 0;
}