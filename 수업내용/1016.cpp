#include <iostream>
#include <vector>
using namespace std;

/*
void print(int* begin, int* end) {
    int* curr = begin;
    while (curr != end) {
        cout << *curr << '\t';
        curr++;
    }
    cout << endl;
}

int sum(int* begin, int* end) {
    int result = 0;
    for (int* curr = begin; curr != end; curr++) {
        result += *curr;
    }
    return result;
}

int main() {
    int list[3] = { 10, 20, 30 };
    cout << (list + 0) << '\t' << *(list + 0) << endl;
    cout << (list + 1) << '\t' << *(list + 1) << endl;
    cout << (list + 2) << '\t' << *(list + 2) << endl;

    int* begin = list;
    int* end = list + 3;

    print(begin, end);
    cout << sum(begin, end) << endl;

    return 0;
}
*/

/*
//정적 배열(static array) : 프로그램 실행 중 크기가 고정되어 변경 불가
int main() {
    const int size = 3;
    int list[size] = { 10, 20, 30 }; //상수만 들어갈 수 있다.

    int length = 3;
    cin >> length;
    int* list2 = new int[length]; //동적 배열 선언, 변수도 들어갈 수 있다.
    //double* list2 = new double[length];

    int* begin = list2;
    int* end = list2 + length;

    for (int* curr = begin; curr != end; curr++) {
        cin >> *curr;
    }

    for (int* curr = begin; curr != end; curr++) {
        cout << *curr << '\t';
    }
    cout << endl;

    delete[] list2; //할당 해제.

    return 0;
}
*/

/*
void print(int** m, int nRow, int nCol) {
    for (int row = 0; row < nRow; row++) {
        for (int col = 0; col < nCol; col++) {
            cout << m[row][col] << '\t';
        }
        cout << endl;
    }
}

int main() {
    //정적 2차원 배열 (2차원 이상은 동적배열로 만듬)
    int matrix[2][2] = { { 1, 2 }, { 3, 4 } }; 

    //동적 2차원 배열 (quiz)
    int nRow = 2, nCol = 2;
    int** matrix2;
    matrix2 = new int*[nRow];
    for (int i = 0; i < nRow; i++) {
        matrix2[i] = new int[nCol];
    }

    matrix2[0][0] = 1; matrix2[0][1] = 2;
    matrix2[1][0] = 3; matrix2[1][1] = 4;

    print(matrix2, nRow, nCol);

    for (int i = 0; i < nRow; i++) {
        delete[] matrix2[i];
    }
    delete[] matrix2;

    return 0;
}
*/

bool find_char(const char* s, char ch) {
    while(*s != '\0') { //'\0' 대신 NULL 사용 가능
        if (*s == ch)
            return true;
        s++;
    }
    return false;
}

int main() {
    const char* phrase = "this is a phrase";

    for (char ch = 'a'; ch < 'z'; ch++) {
        cout << ch << " is ";
        if (!find_char(phrase, ch)) {
            cout << "NOT ";
        }
        cout << "in (" << phrase << ")" << endl;
    }

    return 0;
}