#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;
  for (int q=0; q<a; q++){
    int b;
    cin >> b;
    int c[b];
    for (int i=0; i<b; i++){
      cin >> c[i];
    }
    for (int i=0; i<b; i++){
      for (int j=i+1; j<b; j++){
        if(c[i]==c[j]){
          c[i]=0;
          c[j]=0;
        }
      }
    }
    int d=0;
    for (int i=0; i<b; i++){
      if (c[i]!=0){
        d=c[i];
      }
    }
    cout << "Case #" << q+1 << ": " << d << endl;
  }
  return 0;
}
