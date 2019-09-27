#include <iostream>

using namespace std;

int main() {
    double length, width, s_feet, s_meter;

    cout << "What is the length of the room in feet? ";
    cin >> length;
    cout << "What is the width of the room in feet? ";
    cin >> width;
    s_feet = length * width;
    s_meter = s_feet * 0.09290304;
    cout << "The area is" << endl;
    cout << s_feet << " square feet" << endl;
    cout << s_meter << " square meters" << endl;

    return 0;
}