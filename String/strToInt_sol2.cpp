#include <iostream>
#include <string>
#include <sstream> // to allow stringstream

using namespace std;

int main() {
    //create a stringstream object, to input/output strings
    stringstream ss; 

    // string type variable
    string str = "7";

    // int type variable
    int num;

    // extract the string from the str variable
    ss << str;

    // place the converted value to the int variable
    ss >> num;

   cout << "String converted to integer : " << num << endl;
}