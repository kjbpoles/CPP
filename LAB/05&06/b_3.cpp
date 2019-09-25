#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int input;

    cout << "number : ";
    cin >> input;

    for (int i = 1; i <= input; i++) {
        if ((i % 2 != 0) && (i % 3 != 0)) {
            sum += i;
        }
    }

    cout << "sum : " << sum << endl;

    return 0;
}