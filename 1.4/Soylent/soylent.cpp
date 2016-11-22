#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int a;
  cin >> a;
  int b[a];
  for (int i=0; i<a; i++){
    cin >> b[i];
  }
  for (int i=0; i<a; i++){
    if(b[i]%400==0){
      cout << (b[i]/400) << endl;
    }
    else{
      cout << (b[i]/400)+1 << endl;
    }
  }
}
