#include <iostream>
#include <string>
using namespace std;

int main() {
   string s1 = "7";

   // string class 이용 안하고 그냥 char s1[] = "7"; 하는 것도 가능!

   int num;

   num = stoi (s1);
   cout << "String converted to integer : " << num << endl;
}