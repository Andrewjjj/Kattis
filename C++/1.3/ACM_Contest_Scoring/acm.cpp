#include <iostream>

using namespace std;

int main(){
  int t=0,p=0;
  while(true){
    int a;
    char b;
    string c;
    cin >> a;
    if (a==-1){
      break;
    }
    cin >> b >> c;

    if (c == "right"){
      t++;
      p+=a;
    }
    else{
      p+=20;
    }
  }
  cout << t << p << endl;
}
