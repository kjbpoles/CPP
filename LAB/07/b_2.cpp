#include <iostream>
#include <string>
using namespace std;

int main() {
    string data = "사랑,프로그래밍,의자,사랑의바보,영통역,천년의사랑,냉장고,객체지향";
    string keyword, listword, lastword, result;
    int index_1 = 0, index_2;

    cout << "키워드 : ";
    cin >> keyword;

    while ((data.find(",", index_1) == string::npos) == 0) {
        index_2 = data.find(",", index_1);
        listword = data.substr(index_1, index_2 - index_1);
        index_1 = index_2 + 1;
        if ((listword.find(keyword) == string::npos) == 0)
            result = result + listword + "  ";
    }
    
    lastword = data.substr(index_1, data.size() - index_1);
    if ((lastword.find(keyword) == string::npos) == 0)
        result = result + lastword + "  ";

    cout << endl;
    cout << "검색결과 : " << result << endl;

    return 0;
}