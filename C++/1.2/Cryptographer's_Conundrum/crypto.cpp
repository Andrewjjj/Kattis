#include <iostream>
#include <string>
using namespace std;

int main(){
  string str;
  string a = "PER";
  int b=0;
  cin >> str;
  for (int i=0; i<str.length(); i++){
    if(str.at(i)!=a.at(i%3)){
      str.at(i)=a.at(i%3);
      b++;
    }
  }
  cout << b << endl;
  return 0;
}
