#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;
  int b[a];
  int c=0;
  for (int i=0; i<a; i++){
    cin >> b[i];
    if (b[i]<0){
      c++;
    }
  }
  cout << c << endl;
}
