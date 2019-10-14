#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int>& v) {
    for(unsigned i = 0; i < v.size(); i++) {
        cout << v[i] << '\t';
    }
    cout << endl;
}

void reverse(vector<int>& v) {
    for (int i = 10; i >= 1; i--) {
        v.pop_back();
    }
    for (int i = 10; i >= 1; i--) {
        v.push_back(i);
    }
}



int main() {
    vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "기본 Vector 값:" << endl;
    print(vec);

    reverse(vec);

    cout << "함수 실행 후 Vector 값:" << endl;
    print(vec);

    return 0;
}