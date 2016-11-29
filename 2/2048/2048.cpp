#include <iostream>
using namespace std;

int main(){
  int a[4][4];
  for (int i=0;i<4;i++){
    for (int j=0;j<4;j++){
      cin >> a[i][j];
    }
  }

  int b;
  cin >> b;
  if (b == 0){
    for (int i=0;i<4;i++){
      for (int j=1;j<4;j++){
        if(a[i][j] == a[i][j-1]){
          a[i][j-1]*=a[i][j-1];
          if(j+1<4){
            a[i][j]=a[i][j+1];
          }
          if(j+2<4){
            a[i][j+1]=a[i][j+2];
          }
        }
      }
    }
  }


  for (int i = 0; i < 4; i++){
     for (int j = 0; j <4; j++){
       cout << a[i][j];
       cout << endl;
     }
  }
}
