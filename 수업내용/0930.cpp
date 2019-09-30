#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//0925 수업내용
//파일스트림 : 1) open()  2) close()
//ofstream fout : fout.open(파일이름, ios::app)
//fout << 문자열, fout.put(문자)
//ifstream fin : fin >> 문자열, fin.get(문자)
//getline(fin, 문자열)
//!fin == true : 1) 파일을 제대로 열지 못했을 때, 2) 파일의 끝을 읽었을 때

/*
int main() {
    double a = 12.347;

    cout.width(15); //setw와 동일
    cout << a << endl;

    cout.precision(4); //숫자 몇개까지 보여줄건가 & 반올림
    cout.width(14);
    cout.fill('-'); //width 빈칸에 문자를 넣음
    cout << a << endl;

    char ch;
    cin.unsetf(ios::skipws); //white space 무시를 해제하겠다.
    cin >> ch;
    cout << '(' << ch << ')' << endl;
    cin.setf(ios::skipws);

    return 0;
}
*/

bool readStu(ifstream& fin, int& id, int& score1, int& score2, int& score3) {
    fin >> id >> score1 >> score2 >> score3;
    if (!fin)
        return false;
    else
        return true;
}

void calcGrade(int score1, int score2, int score3, int& avg, char& grade) {
    avg = (score1 + score2 + score3) / 3;
    if (avg >= 90)
        grade = 'A';
    else if (avg >= 80)
        grade = 'B';
    else if (avg >= 70)
        grade = 'C';
    else if (avg >= 60)
        grade = 'D';
    else
        grade = 'F';
}

void writeStu(ofstream& fout, int id, int avg, char grade) {
    fout.fill('0');
    fout << setw(4) << id;
    fout.fill(' ');
    fout << setw(3) << avg;
    fout << setw(2) << grade << endl;
}

int main() {
    //반복 : 모든 학생정보를 처리할 때까지
    //1) ch7STU.. 파일에서 1명의 학생정보를 읽기(id, s1, s2, s3)
    //2) s1, s2, s3를 입력으로 받아 평균(avg), 학점(grade)을 출력
    //3) grade.txt : id, avg, grade 순서로 저장
    //4) 예외처리(파일열기 또는 저장에러)

    ifstream fin("ch7STUFL.DAT"); //fin.open()
    ofstream fout("grade.txt");

    int id, score1, score2, score3, avg;
    char grade;

    //4)
    if (!fin || !fout) {
        cout << "파일 열기 오류" << endl;
        exit(100);
    }

    while (readStu(fin, id, score1, score2, score3)) { //1)
        calcGrade(score1, score2, score3, avg, grade); //2)
        writeStu(fout, id, avg, grade); //3)
    }

    cout << "프로그램 종료" << endl;

    fin.close();
    fout.close();

    return 0;
}