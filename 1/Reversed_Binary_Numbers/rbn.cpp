#include <iostream>
using namespace std;

int main(){
  int a,b[16],c=0;
  cin >> a;
  for (int i=0;i<15;i++){
      b[i]=(a>>i & 1);
      cout << b[i];
  }
  while(b[c]==1){
    c++;
    cout << c << endl;
  }
  cout << endl;
  cout << c << endl;
  int d[c-1];
  for(int i=0;i<c+1;i++){
    d[c]=b[i];
    c--;
    cout << d[c];
  }
}
