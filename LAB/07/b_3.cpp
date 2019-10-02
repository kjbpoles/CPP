#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("b_3_temp.txt");

    if (!fout) {
        cout << "Error" << endl;
        exit(100);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            fout << arc4random() % 101 << " ";
        }
        fout << endl;
    }
    
    fout.close();
    return 0;
}