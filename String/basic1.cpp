#include <iostream>
#include <string>

using namespace std;

int main() {
    string st1;
    // st1 = "program"; // st1을 "program"으로 초기화 하거나
    cin >> st1; // 사용자로부터 "program"을 입력 받아 st1에 저장
    cout << st1 << endl; // "program" 출력

    st1[2] = 'k'; // 'o' 대신 'k' 들어감
    cout << st1 << endl; // "prkgram" 출력

    string st2, st3, st4;
    st2 = "hello";
    st3 = "nice to meet you";
    st4 = st2 + ". " + st3;
    cout << st4 << endl; // "hello. nice to meet you" 출력
}