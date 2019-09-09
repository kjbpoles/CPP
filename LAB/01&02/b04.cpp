#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cout << "Please enter two integer values:" << endl;
    cout << "A : ";
    cin >> A;
    cout << "B : ";
    cin >> B;
    
    C = A + B;
    A = C - A;
    B = C - A;

    cout << "value of A is : " << A << endl;
    cout << "value of B is : " << B << endl;
}