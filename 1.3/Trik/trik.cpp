#include <iostream>
#include <string>

using namespace std;

int main(){
  string str;
  cin >> str;
  int length=str.length();
  int b=1;
  int c;
  for (int i=0;i<length;i++){
    c = str.at(i);
    if(c == 'A'){
      if(b==1){
        b=2;
      }
      else if (b==2){
        b=1;
      }
    }
    else if(c=='B'){
      if (b == 2){
        b=3;
      }
      else if ( b==3){
        b=2;
      }
    }
    else if(c=='C'){
      if (b==1){
        b=3;
      }
      else if (b==3){
        b=1;
      }
    }
  }
  cout << b << endl;
}
