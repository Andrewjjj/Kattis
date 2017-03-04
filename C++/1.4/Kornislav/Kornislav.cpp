#include <iostream>
using namespace std;

int main(){
  int a[4],b=0,c=100;
  for (int i=0; i<4; i++){
    cin >> a[i];
  }
  for (int i=0; i<4; i++){
    if(a[i]>b){
      b=a[i];
    }
  }
  for (int i=0; i<4; i++){
    if(a[i]<c){
      c=a[i];
    }
  }
  for (int i=0; i<4; i++){
    if(a[i]==b){
      a[i]=0;
      b=0;
    }
  }
  for (int i=0; i<4; i++){
    if(a[i]>b){
      b=a[i];
    }
  }
  cout << b*c << endl;
  return 0;
}
