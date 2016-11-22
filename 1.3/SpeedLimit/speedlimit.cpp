#include <iostream>
using namespace std;

int main() {
  int a=1;
  int b[2],c,d,fin;
  while (true){
    fin = 0;
    cin >> a;
    if(a==-1){
      break;
    }
    cin >> b[0] >> b[1];
    fin = b[0]*b[1];
    d=b[1];
    for(int i=0; i<a-1; i++){
      cin >> b[0] >> b[1];
      d=b[1]-d;
      fin+=b[0]*d;
      d=b[1];
    }
    cout << fin << " miles" << endl;
  }
  return 0;
}
