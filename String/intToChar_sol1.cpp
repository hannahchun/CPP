#include <iostream>

using namespace std;

int main() {
    int seven_int = 7;
    char seven_char = (char) (seven_int + 48);
    cout << "Integer converted to Char : " << seven_char <<endl;
    return 0;
}

// 이 방법은 ‘0’≤  ≤‘9’  일 때만 가능