#include <iostream>
#include <string>

using namespace std;

int main() {
    string st1("hello"), st2("world"); 
    string st3;

    st3 = st1; // st3 = "hello"

    if (st1 >= st2) // 이 상황에서는 음수 반환 하므로, false 리턴 
        st3 += st1; 
    
    cout << st3 << endl; // "hello" 출력
    
    int n = st2.size(); // n = 5
    cout << n << endl; // 5 출력
}