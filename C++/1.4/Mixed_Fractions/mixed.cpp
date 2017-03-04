#include <iostream>
#include <math.h>
using namespace std;

int main(){
  while(true){
    int a,b,c=0,d=0;
    cin >> a >> b;
    if (a==0 && b==0){
      break;
    }
    if(a>=b){
      c=a%b;
      d=floor(a/b);
      cout << d << " " << c << " / " << b << endl;
    }
    else{
      cout << "0 " << a << " / " << b << endl;
    }
  }
  return 0;
}
