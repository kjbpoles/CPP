#include <iostream>
using namespace std;

int main() {
    int num;
    while (true) {
        cout << "number : ";
        cin  >> num;
        if (num <= 0) {
            cout << "잘못된 숫자입니다." << endl;
            break;
        }
        else if (num % 2 == 0) {
            cout << num << "은 짝수입니다." << endl;
        }
        else {
            cout << num << "은 홀수입니다." << endl;
        }
    }
    return 0;
}