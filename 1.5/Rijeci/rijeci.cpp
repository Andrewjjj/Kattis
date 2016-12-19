#include <iostream>
using namespace std;

int main(){
  int q;
  int a=1,b=0,c=0;
  cin >> q;
  for (int i=0; i<q; i++){
    c=a;
    a=b;
    b+=c;
    // cout << a << " : " << b <<endl;
  }
  cout << a << " " << b << endl;
  return 0;
}
