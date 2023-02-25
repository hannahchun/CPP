#include <iostream>
#include <string>

using namespace std;

int main() {
    string st1("test");
    st1.insert(3, "pp"); // st1의 인덱스 3 위치에 "pp"를 넣음 
    cout << st1 << endl; // "tesppt" 출력, st1 = "tesppt" 가 된 것임!
    st1.insert(3, "program", 4, 2); // st1의 인덱스 3 위치에, "program"의 인덱스 4 위치부터 2개의 문자를 넣음
    cout << st1 << endl; // "tesrappt" 출력, st1 = "tesrappt" 가 된 것임!

    string st2("serious");
    st2.erase(3, 2); // st2의 인덱스 3과 4 위치에 있는 문자 지움
    cout << st2 << endl; // "serus" 출력, st2 = "serus" 가 된 것임!

    int n = st2.size(); // st2의 문자 수 계산
    cout << n << endl; // 5 출력
}