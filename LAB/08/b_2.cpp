#include <iostream>
#include <string>
using namespace std;

void changeStr(string *input) {
    cout << "input> ";
    cin >> *input;
}

int main() {
    string str = "This is default value";
    cout << "기본값 출력> " << str << endl;
    changeStr(&str);
    cout << "변환된 값 출력> " << str << endl;

    return 0;
}