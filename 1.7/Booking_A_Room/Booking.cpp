#include <iostream>
using namespace std;

int main(){
  int a,b,q=0;
  cin >> a >> b;
  int c[a]={0};
  int d;
  for (int i=0; i<b; i++){
    cin >> d;
    c[d-1]=1;
  }
  for (int i=0; i<a; i++){
    if ((c[i])==0){
      cout << i+1 << endl;
      q=1;
      return 0;
    }
  }
  if (q==0){
    cout << "too late" << endl;
  }
  return 0;
}
