#include <iostream>
#include <string>
#include <fstream> //ifstream ofstream
using namespace std;

//파일입출력 : ifstream, ofstream (open(), close())
//ofstream fout : fout << 문자열, fout.put(문자)
//ifstream fin : fin >> 문자열, fin.get(문자), getline(fin, 문자열) -> 1줄씩 읽기
//fin : 파일이 제대로 열리지 않거나 file의 끝에 도달 = false

/*
int main() {
    string s1 = "fred";
    cout << s1 << endl;
    cout << s1.size() << endl << endl; //s1.length()

    cout << s1.empty() << endl; //empty() : 문자열이 빈 문자열이면 1, 아니면 0을 출력
    s1.clear(); //s1 = "";
    cout << s1.empty() << endl << endl;

    s1 = "Good";
    s1 = s1 + "-bye";
    //Good-bye
    //01234567 : index
    cout << s1 << endl;
    cout << s1[4] << ", " << s1.at(4) << endl;
    cout << s1.substr(5, 3) << endl; //index 5부터 문자 3개 return
    cout << s1.find("od") << endl; //찾을려는 문자열의 시작 index를 return
    cout << (s1.find("od", 5) == string::npos) << endl; //찾으면 0, 못찾으면 1 return

    //문자열에서 두번째 나오는 것의 index 구하기
    s1 = s1 + "-od";
    int index = s1.find("od");
    cout << s1.find("od", index + 2) << endl;

    return 0;
}
*/

int main() {
    ofstream fout;
    string s1  =  "Objective Oriented Programming";
    
    fout.open("example.txt");  //덮어쓰기
    //fout.open("example.txt", ios::app); //이어쓰기
    fout << s1 << endl;
    fout << "Random Variable" << endl;
    fout << "Linear Algebra" << endl;
    fout.close();

    ifstream fin;
    char ch;
    fin.open("example.txt");
    if (!fin) {
        cout << "Error: no such file exists" << endl;
        exit(100); //프로그램 강제종료
    }

//    while (true) {
        //fin >> s1; //문자열 1개(띄어쓰기, 줄바꿈으로 구분)
//        fin.get(ch);
//        if (!fin){
//            break;
//        }
//        cout << ch;
//    }
//    fin.close();

    while (getline(fin, s1)) {
        cout << s1 << endl;
    }

    return 0;
}