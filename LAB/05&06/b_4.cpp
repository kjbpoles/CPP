#include <iostream>
using namespace std;

int main() {
    int num;
    while (true) {
        cout << "number : ";
        cin  >> num;
        if (num < 1 || num > 9) {
            cout << "잘못된 숫자입니다." << endl;
            break;
        }
        else {
            for (int i = 1; i <= 9; i++) {
                cout << num << "*" << i << " = " << num * i << "  ";
            }
            cout << endl;
        }
    }
    return 0;
}