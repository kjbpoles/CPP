#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double length, width, s_meters;

    cout << "What is the length of the wall? ";
    cin >> length;
    cout << "What is the width of the wall? ";
    cin >> width;
    s_meters = length * width;
    cout << "1 liters of paint can cover 9 square meters." << endl;
    cout << "You will need to purchase " << ceil(s_meters / 9) << " liters of paint to cover " << s_meters << " square meters." << endl;

    return 0;
}