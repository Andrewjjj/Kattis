#include <iostream>
#include <cmath>
using namespace std;
int getDigitSum(long int a){
  int q=0;
  for (int i=0; i<6; i++){
    int d=a/pow(10,i);
    int c=d%10;
    q=q+c;
  }
  cout << q << endl;
  return q;
}

int main(){
  while(true){
    int a=0;
    int b=0;
    int c=11;
    cin >> a;
    getDigitSum(a);
    if(a<=0){
      break;
    }
    while(true){
      int g=getDigitSum(a);
      int h=getDigitSum(a*c);
      if(g==h){
        cout << c << endl;
        break;
      }
      else{
        ++c;
      }
    }
  }
  return 0;
}
