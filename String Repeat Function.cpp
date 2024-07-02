//String Repeat Function
#include <iostream>
#include <string>
using namespace std;

string Repeat_function(string str,int r,string sp,bool config){
  string repeated="";
  for(int i=0;i<r;i++){
    if(config){
    if(i<r-1) repeated += str + sp;
    else  repeated += str;
    }
    else repeated += str;
  }
  return repeated;
}

int main(){
 cout << Repeat_function("Mahfoudh",5,"/",true);
  return 0;
}
