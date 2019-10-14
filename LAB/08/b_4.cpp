#include <iostream>
#include <vector>
using namespace std;

int inputGrade(float grade) {
    cin >> grade;
    if ((grade - (int)grade) != 0.0 || grade < 0 || grade > 100) {
        cout << "invalid input!!!" << endl;
        exit(EXIT_FAILURE);
    }
    else
        return (int)grade;
}

int* topGrade(const vector<int>& grade) {
    int x = 0;
    for (int i = 0; i < grade.size(); i++) {
        if (grade[i] > x)
            x = grade[i];
    }
    int* top = &x;
    return top;
}

int main() {
    vector<int> grades;
    float _grade = 0;
    for (int i = 0; i < 3; i++) {
        cout << "Input " << i << "-th grade(0~100):";
        int grade = inputGrade(_grade);
        grades.push_back(grade);
    }
    /* 구현 : 이 부분 없어도 동작하게 코딩했습니다. */
    cout << "Top Grade: " << *topGrade(grades) << endl;
    return 0;
}