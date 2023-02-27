// 한 문자를 int로 바꾸는 작업 
// ex. '7' -> 7 
#include <iostream>

using namespace std;

int main() {
    char seven_char = '7';
    int seven_int = seven_char - '0';
    int res = seven_int + 1;
    cout << seven_char << " + 1 is " << res << endl;
    return 0;
}

// 이 방법은 ‘0’≤  ≤‘9’  일 때만 가능