#include <iostream>
using namespace std;

int main(){
  int a[5][5],b=0,c=0;
  for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
      a[i][j]=0;
    }
  }
  for (int i=0;i<5;i++){
    for (int j=0;j<4;j++){
      cin >> a[i][j];
    }
  }
  for (int i=0;i<5;i++){
    for (int j=0;j<4;j++){
      a[i][4]+=a[i][j];
    }
  }
  for (int i=0;i<5;i++){
    if(a[i][4]>b){
      b=a[i][4];
      c=i+1;
    }
  }
  cout << c << " " << b << endl;
}
