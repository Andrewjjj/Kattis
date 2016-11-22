#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int a,tot=0;
  cin >> a;
  int b[a];
  for (int i=0;i<a;i++){
    cin >> b[i];
    long c=(b[i]/10);
    c=b[i]-(c*10);
    b[i]=pow(b[i]/10,c);
    tot+=b[i];
  }
  cout << tot << endl;
  return 0;
}
