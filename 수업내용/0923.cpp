#include <iostream>
#include <iomanip>

using namespace std;

//while : 조건문 -> statement -> 조건문
//do{}while(); : statement -> 조건문 -> statement
//for
//switch

/*
int main() {
    int sum = 0;
    int input;
    while (true) {
        cout << "Enter a number : ";
        cin >> input;
        if (input < 0) {
            break;
            //continue;
        }

        sum = sum + input;
        cout << "Sum : " << sum << endl;
    }

    return 0;
}
*/

/*
int main() {
    int input;
    do {
        cout << "Enter a number [0, 10] : ";
        cin >> input;

    } while (input < 0 || input > 10); //while (!(input >= 0 && input <= 10))

    cout << "Output : " << input << endl;

    return 0;
}
*/

/*
int main() {
    int sum = 0, sum2 = 0;

    int i = 1; //초기화(initialization)
    while (i <= 100) { //반복조건(condition)
        sum += i; //statement
        i++; //업데이트(modification)
    }

    for (int j = 1; j <= 100; j++) {
        sum2 += j;
    }

    cout << sum << endl;
    cout << sum2 << endl;

    return 0;
}
*/

/*
int main() {
    int size;
    cout << "Enter a size : ";
    cin >> size;

    for (int row = 1; row <= size; row++) {
        for (int col = 1; col <= size; col++) {
            int val = row * col;
            cout << setw(5) << val;
        }
        cout << endl;
    }

    return 0;
}
*/

/*
int main() {
    char input;
    cout << "Enter a key : ";
    cin >> input;

    switch (input) {
        case 'P':
        case 'p':
            cout << "Pause" << endl;
            break;
        case 'Q':
        case 'q':
            cout << "Quit" << endl;
            break;
        default:
            cout << "Default" << endl;
            break;
    }

    return 0;
}
*/

int main() {
    for (char first = 'A'; first <= 'D'; first++) {
        for (char second = 'A'; second <= 'D'; second++) {
            if (second != first) {
                for (char third = 'A'; third <= 'D'; third++) {
                    if (third != first && third != second) {
                        for (char fourth = 'A'; fourth <= 'D'; fourth++) {
                            if (fourth != first && fourth != second && fourth != third) {
                                cout << first << second << third << fourth << endl;
                            }
                        }
                    }
                }
            }
        }
    }
}