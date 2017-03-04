#include <iostream>
using namespace std;

int main(){
  int a[42]={0},b[10],c=0;
  for (int i=0; i<10; i++){
    cin >> b[i];
    a[b[i]%42]++;
  }
  for (int i=0; i<42; i++){
    if(a[i]!=0){
      c++;
    }
  }
  cout << c << endl;
  return 0;
}
