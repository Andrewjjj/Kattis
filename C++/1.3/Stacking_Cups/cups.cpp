#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
  int a;
  cin >> a;
  int values[a];
  string str[a];

  for (int i=0; i<a; i++){
    char b,c;
    cin >> b >> c;
    if (b.isdigit()==1){
      values[i]=strtol(b*2);
      str[i]=c;
    }
    else{
      values[i]=strtol(c);
      str[i]=b;
    }
  }
}
