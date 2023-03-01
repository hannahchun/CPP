#include <iostream>

using namespace std;

int main() {
    int *p, *q, a[5] = {1, 3, 5, 7, 9};
    
    p = a; 
    q = a;

    p += 3; // p = &a[3]
    (*q) += 3; // *q = a[0] + 3 = 4

    cout << *p << endl; // 7
    cout << *q << endl; // 4

    for (int i = 0; i < 5; i++)
        cout << a[i] << endl; // 4, 3, 5, 7, 9
}