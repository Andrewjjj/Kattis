#include <iostream>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  b=b-45;
  if (b<0){
    b+=60;
    a-=1;
  }
  if(a<0){
    a=23;
  }
  cout << a << " " << b << endl;
}
