#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int r;
    r = a % b;
    if (r == 0)
        return b;

    return gcd(b, r);
}

int main() {
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "gcd(" << x << "," << y <<") = " << gcd(x, y) << endl;

    return 0;
}