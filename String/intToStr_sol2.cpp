#include <iostream>
#include <string>
#include <sstream> // to allow stringstream

using namespace std;

int main() {
    //create a stringstream object, to input/output strings
    stringstream ss;

    // int type variable
    int num = 7;

    // str type variable
    string str;
    
    // extract the int from the int variable
    ss << num;

    // place the converted value to the str variable
    ss >> str;

   cout << "Integer converted to string : " << str << endl;
}