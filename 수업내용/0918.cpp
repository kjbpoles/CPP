#include <iostream>
#include <iomanip>
using namespace std;

/*
int main() {
    bool a = true;
    bool b = (10 >= 5);
    bool c = 1000; //0이 아니면 true

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
*/

/*
int main() {
    int score;
    char grade;

    cout << "Enter the score : ";
    cin >> score;

    //폭포수 방식
    if (score > 100) {
        grade = 'N';
        cout << "Enter the number between 0 ~ 100!" << endl;
    }
    else if (score >= 90) {
        grade = 'A';
    }
    else if (score >= 80) {
        grade = 'B';
    }
    else if (score >= 70) {
        grade = 'C';
    }
    else if (score >= 0) {
        grade = 'F';
    }
    else {
        grade = 'N';
        cout << "Enter the number between 0 ~ 100!" << endl;
    }

    cout << "Your grade is " << grade << "!" << endl;

    return 0;
}
*/

/*
int main() {
    int score;
    char grade;

    cout << "Enter the score (0 ~ 100) : ";
    cin >> score;

    //if - else if - else 는 순차적으로 조건을 탐색한다음 참인 부분의 block을 실행
    //(1) 반드시 처음에는 if를 적어준다.
    //(2) else는 위에 있는 모든 조건이 거짓일 경우 자동 수행된다.
    //(3) block 안의 문장이 하나일 경우 중괄호를 생략할 수 있다.
    if (score >= 0 && score <= 100) {
        if (score >= 90) {
            grade = 'A';
        }
        else if (score >= 80) {
            grade = 'B';
        }
        else if (score >= 70) {
            grade = 'C';
        }
        else {
            grade = 'F';
        }
        cout << "Your grade is " << grade << "!" << endl;
    }
    else {
        cout << "Enter the number between 0 ~ 100!" << endl;
    }

    return 0;
}
*/

/*
int main() {
    int n, x = 0, i = 1;
    cin >> n;
    while (i <= n) {
        x = x + i;
        cout << i << '\t' << x << endl;
        i = i + 1;
    }

    return 0;
}
*/

/*
int main() {
    int row = 1, col = 1;
    int n;
    cin >> n;

    //while : 괄호안이 참이면 block 수행, 수행이 끝나면 다시 괄호안 참 or 거짓 검사
    while (row <= n) {
        while (col <= n) {
            int val = row * col;
            cout <<  setw(4) << val;
            col++;
        }
        cout << endl;
        row++;
        col = 1;
    }

    return 0;
}
*/

//Textbook 5.13
int main() {
    const int SECONDS_PER_MINUTE = 60, SECONDS_PER_HOUR = 60 * SECONDS_PER_MINUTE;
    int hours, minutes, seconds;

    cout << "Please enter the number of seconds : ";
    cin >> seconds;

    hours = seconds / SECONDS_PER_HOUR;
    seconds = seconds % SECONDS_PER_HOUR;

    minutes = seconds / SECONDS_PER_MINUTE;
    seconds = seconds % SECONDS_PER_MINUTE;

    if (hours > 0) {
        cout << hours;
        if (hours == 1)
            cout << " hour ";
        else
            cout << " hours ";
    }

    if (minutes > 0) {
        cout << minutes;
        if (minutes == 1)
            cout << " minute ";
        else
            cout << " minutes ";
    }

    if (seconds > 0 || (hours == 0 && minutes == 0 && seconds == 0)) {
        cout << seconds;
        if (seconds == 1)
            cout << " second";
        else
            cout << " seconds";
    }

    cout << endl;
}