#include <iostream>
using namespace std;

/*
//local variable : 함수 안에서만 존재, 함수가 종료되면 사라짐.
void increase(int x) {
    int a = 100;
    x++;
}

int main() {
    int x = 10;
    cout << x << endl;

    increase(x);
    cout << x << endl;

    return 0;
}
*/

/*
//global variable : 함수 외부에 선언되어 모든 함수에서 공통적으로 사용가능. 
//단점 : 한번 만든 gVar 삭제불가능. 가급적이면 안쓰는게 좋음.
int gVar; 

void print() {
    gVar = 1000;
}

int main() {
    //int gVar; 로컬과 글로벌이 동시에 선언되면 로컬이 우선됨.
    gVar = 10;
    cout << gVar << endl;
    print();
    cout << gVar << endl;

    return 0;
}
*/

/*
//pass by value : 함수의 입력 인자에 복사를 통해 전달
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 1000;
    cout << x << '\t' << y << endl;

    swap(x, y); //x와 y의 값을 바꾸는 함수
    cout << x << '\t' << y << endl;

    return 0;
}
*/

/*
//reference value : 동기화됨
int main() {
    int x = 10;
    int& y = x;
    cout << x << '\t' << y << endl;
    x = 1000;
    cout << x << '\t' << y << endl;
    y = 2;
    cout << x << '\t' << y << endl;

    return 0;
}
*/

/*
//pass by reference : 함수의 입력 인자를 reference value로 전달. 장점 : 원래 함수는 리턴값 하나만 가능한데 리턴값을 여러개로 하려면 리턴값을 여러개로 할 수 있다.
//pass by value : (int a), pass by reference : (int& a)
void swap(int& a, int& b) { //x와 a 동기화, y와 b 동기화
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 1000;
    cout << x << '\t' << y << endl;

    swap(x, y); //x와 y의 값을 바꾸는 함수
    cout << x << '\t' << y << endl;

    return 0;
}
*/

/*
//recursion 재귀함수 안쓰는게 이득(메모리때문에)
int factorial(int n) {
    //termination condition
    if(n == 0)
        return 1;

    //base condition
    return n * factorial(n - 1);
}

int main() {
    int x = 5;
    cout << factorial(x) << endl;

    return 0;
}
*/