#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char st1[] = "hello", st2[] = "world"; 
    char st3[20];

    strcpy(st3, st1); // st3 = "hello"

    if (strcmp(st1, st2) >= 0) // 이 상황에서는 strcmp(st1, st2) 가 음수 반환 하므로, false 리턴 
        strcat(st3, st1); 
    
    cout << st3 << endl; // "hello" 출력
    
    int n = strlen(st2); // n = 5
    cout << n << endl; // 5 출력
}