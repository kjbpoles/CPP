#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int input;

    cout << "number : ";
    cin >> input;

    for (int i = 1; i <= input; i++) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}