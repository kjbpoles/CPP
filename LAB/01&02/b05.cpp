#include <iostream>
using namespace std;

int main() {
    double C, F;
    cout << "Please enter Fahrenheit value : ";
    cin >> F;
    C = 5.0 / 9.0 * (F - 32);
    cout << "Celsius value is " << C << endl;
}