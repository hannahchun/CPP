#include <iostream>

using namespace std;

void sub1(int n, int *p) {
    // n = 3
    // *p = 5
    n++; // n = 4
    (*p)++; // *p = 6
}

void sub2(int b[]) { // sub2(int *b)도 가능
    for (int i = 0; i < 5; i++) 
        b[i]++;
    // b = {2, 4, 6, 8, 10}
}

int main() {
    int x, y, a[5] = {1, 3, 5, 7, 9};
    
    x = 3; 
    y = 5;

    sub1(x, &y);

    cout << x << endl; // 3
    cout << y << endl; // 6

    sub2(a); 

    for (int i = 0; i < 5; i++)
        cout << a[i] << endl; // 2, 4, 6, 8, 10
    
    // Array의 name은 원소의 type을 domain type으로 하는 pointer 상수이기 때문에 수정 불가능
    // a = a + 3은 error
    int *p;
    p = a;
    p += 3;
    *p = 17;
    cout << a[3] << endl; // 17
}