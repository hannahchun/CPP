#include <iostream>
#include <string>
using namespace std;

int main() {
   string id;

   // id가 4자리 정수가 아니면 다시 입력받도록 하기
   cout << "Enter id of element : ";
   getline(cin, id);

   while(1) {
      bool isValid = true;

      if (id.length() != 4) {
         isValid = false;
      } 
      else {
         if (id[0] - '0' <= 0 || 9 < id[0] - '0'){
            isValid = false;
         }
         else {
           for (int i = 1 ; i < 4 ; i++) {
               if (id[i] - '0' < 0 || 9 < id[i] - '0')
                  isValid = false;
            } 
         }
      }
     
      if (isValid == true)
         break;
      cout << "Invalid input!" << endl;
      cout << "Enter id of element : ";
      getline(cin, id);
   }
   cout << "Success!" << endl;
}