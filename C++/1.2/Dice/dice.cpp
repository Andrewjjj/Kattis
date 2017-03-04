#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int a,b,d;
  d=0;
  cin >> a >> b;
  int c[a+b];
  for (int i=0;i<a+b;i++){
    c[i]=0;
  }
  for (int i=1;i<=a; i++){
    for (int j=1; j<=b; j++){
      c[i+j]+=1;
    }
  }
  for (int i=0;i<a+b;i++){
    if(c[i]>=d){
      d=c[i];
    }
  }
  for (int i=0; i<a+b; i++){
    if(c[i]==d){
      cout << i << endl;
    }
  }
  return 0;
}
