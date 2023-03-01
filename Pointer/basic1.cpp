#include <iostream>

using namespace std;

int main() {
    int *p1, *p2, a, b;

    a = 3;
    b = 5;
    p1 = &a;
    p2 = &b;

    *p1 = *p2; // a = b
    cout << a << endl; 
    cout << b << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;
}