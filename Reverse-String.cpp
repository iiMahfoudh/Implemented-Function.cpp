//Reverse String
#include <iostream>
#include <string>
using namespace std;

string reversed_string(string str){
  string rstr ="";
  for(int i=str.size();i>=0;i--){
    rstr += str[i];
  }
  return rstr;
}
int main(){
  cout << reversed_string("Sellakh Mahfoudh");
  return 0;
}
