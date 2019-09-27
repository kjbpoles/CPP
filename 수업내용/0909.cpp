#include <iostream>
#include <cmath> // log, exp, cos, sqrt
using namespace std;

/*
//(1) 선언(declaration) : 함수의 원형을 만듦
int square(int a); //출력자료형 함수이름(입력변수)

int main() {
    int x = 10;
    cout << square(x) << endl; //(3) 호출(calling)

    x = 100;
    cout << square(x) << endl;
}

//(2) 정의(define) : main 함수 아래에 작성
int square(int a) {
    return a * a;
}
*/

/*
int get_data();
int sum(int a, int b);
int subt(int a, int b);
int mult(int a, int b);
float idiv(int a, int b);

int main() {
    int x, y;
    x = get_data();
    y = get_data();

    cout << "x + y = " << sum(x, y) << endl;
    cout << "x - y = " << subt(x, y) << endl;
    cout << "x * y = " << mult(x, y) << endl;
    cout << "x / y = " << idiv(x, y) << endl;

    return 0;
}

int get_data() {
    int a;
    cout << "Enter a number : ";
    cin >> a;
    return a;
}

int sum(int a, int b) {
    return a + b;
}

int subt(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

float idiv(int a, int b) {
    return float(a) / b;
}
*/

/*
int main() {
    double x = 10.0; //x를 10으로 초기화 했디. (initialization)
    cout << cos(x) << endl;
    cout << log(x) << endl;
    cout << sqrt(x) << endl;
    cout << exp(x) << endl;

    return 0;
}
*/

//default arguments rule (1) 선언부에서 사용
void point(int x = 1000, int y = 2000);

int main() {
    point(1, 2);
    point();
    point(1); //default arguments rule (2) 왼쪽부터 순차적으로 할당됨. x만 1을 할당, y만 할당하는 방법은 없다.

    return 0;
}

void point(int x, int y) {
    cout << x << '\t' << y << endl;
}