#include <iostream>
#include <string>

using namespace std;

int main(){
  int a=0,b=0,c=0,tot;
  string str;
  cin >> str;

  for (int i=0; i<str.size(); i++){
    if(str.at(i) == 'T'){
      a+=1;
    }
    if(str.at(i) == 'C'){
      b+=1;
    }
    if(str.at(i) == 'G'){
      c+=1;
    }
  }
  tot=(a*a)+(b*b)+(c*c)+(min(min(a,b),c)*7);
  cout << tot << endl;

}
