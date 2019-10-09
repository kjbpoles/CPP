#include <iostream>
#include <vector>
using namespace std;

/*
int main() {
    int a = 10;
    int* pa = &a;
    int** ppa = &pa;

    return 0;
}
*/

/*
int sum(int a, int b) {
    return a + b;
}

int mult(int a, int b) {
    return a * b;
}

int evaluate(int (*func)(int, int), int a, int b) {
    return func(a, b);
}

int main() {
    int (*func)(int, int);

    func = &sum;
    cout << func(10, 20) << endl;

    func = &mult;
    cout << func(10, 20) << endl;

    cout << evaluate(&sum, 10, 20) << endl;
    cout << evaluate(&mult, 10, 20) << endl;

    return 0;
}
*/

void print(const vector<int>& v) {
    for(unsigned i = 0; i < v.size(); i++) {
        cout << v[i] << '\t';
    }
    cout << endl;
}

int main() {
    vector<int> vec_a(5);
    vector<int> vec_b(5, 8);
    vector<int> vec{ 10, 20, 30, 40 };

    vec.at(0) = 1000;
    vec[1] = 2000;
    print(vec);
    
    vec.push_back(50); //맨 뒤에 50 추가
    print(vec);

    vec.pop_back(); //맨 뒤에 있는것 삭제
    print(vec);

    // int& elem = vec[0] -> body ->
    // int& elem = vec[1]
    for(int& elem : vec)
        cin >> elem;
    
    // int elem = vec[0] -> body ->
    // int elem = vec[1] -> body ->
    for(int elem : vec)
        cout << elem << '\t';
    cout << endl;

    return 0;
}