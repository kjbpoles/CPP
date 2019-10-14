#include <iostream>
using namespace std;

void square(int* x) {
    *x = *x * *x;
}

int main() {
    int input;
    cout << "input> ";
    cin >> input;

    square(&input);

    cout << "제곱값> " << input << endl;

    return 0;
}