#include <iostream>
using namespace std;

/*int main() {
    int x; //선언
    int y;
    x = 10; //할당 x <- 10
    y = 20;
    cout << x << endl; //cout : 변수를 화면에 출력, iostream이라는 라이브러리 안에 cout이라는 함수 포함, endl : 줄바꿈
    cout << y << endl;
}
 */

/*
멀티주석
멀티주석
멀티주석
 */

/*
int main() {
    short int sx;
    int x;
    long int lx;
    long long int llx;
    unsigned int ux;
    cout << sizeof(sx) << endl; //sizeof() 변수크기(bytes) return, 2 bytes
    cout << sizeof(x) << endl; //4 bytes
    cout << sizeof(lx) << endl; //8 bytes
    cout << sizeof(llx) << endl; //8 bytes
    cout << sizeof(ux) << endl; //4 bytes
}
 */

/*
int main() {
    char ch = 'A'; //char : 문자 1개만 가능
    char ch2 = 65; //ASCII code number 65 -> 'A'
    char ch3 = 65 + 32; //소문자 만들기 : + 32 하면됨, 대문자는 65 ~ 90, 소문자는 97 ~ 122, if문으로 대소문자 판별하기
    cout << ch << endl;
    cout << ch2 << endl;
    cout << ch3 << endl;
}
 */

/*
int main() {
    const double PI = 3.14; //상수는 한번 할당하면 값을 바꿀 수 없다. 다른 변수와 구분하기 위해 대문자로 많이 쓴다.
}
 */

/*
int main() {
    int x, y, sum, mult, mod;
    float div;
    cin >> x >> y; //cin : 키보드로부터 값을 입력받음, iostream library
    sum = x + y;
    mult = x * y;
    div = float(x) / y; //형변환 : 정수와 정수를 나누면 정수값이 나오기 때문
    mod = x % y;
    cout << x << '\t' << y << endl;
    cout << "x + y = " << sum << endl;
    cout << "x * y = " << mult << endl;
    cout << "x / y = " << div << endl;
    cout << "x % y = " << mod << endl;
}
 */

/*
int main() {
    int x = 10, y = 20;
    x += y;
    
    x = 20;
    cout << x++ << endl; //return 20 : statement -> x를 1증가
    cout << ++x << endl; //return 22 : x를 1증가 -> statement
}
 */

int main() {
    cout << (7 >= 5) << endl; //1 -> True
    cout << (7 == 5) << endl; //0 -> False
    cout << (7 <= 5 ? 1000 : -1000) << endl; //conditional ternary operator
}