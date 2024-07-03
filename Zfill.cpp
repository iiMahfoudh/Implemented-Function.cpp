//Zfill Function
#include <iostream>
#include <string>
using namespace std;

string Zfill(string str,int weight,string fill="0"){    //Define Function and setting default parametre "0"
  int len = str.length();   // Return String Lenght
  if(len < weight){ //Check if the lenght is allreaddy lower than the weight
    for(int i=0;i<weight-len;i++){ //Looping and filling blanks
      str = fill + str;
    }
  }

  return str; // returning string 
}

int main(){
  cout << Zfill("Hey",7); // calling the Zfill Function
  return 0;
}
