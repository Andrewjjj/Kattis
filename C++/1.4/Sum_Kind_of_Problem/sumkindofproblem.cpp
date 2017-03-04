#include <iostream>
using namespace std;
int main(){
  int a;
  cin >> a;
  for (int q=0; q<a; q++){
    int b,f;
    int c=0;
    cin >> f >> b;
    cout << f << " ";
    for (int i=1; i<=b; i++){
      c+=i;
    }
    cout << c << " ";
    c=0;
    for (int i=1; i<=b*2; i+=2){
      c+=i;
    }
    cout << c << " ";
    c=0;
    for (int i=2; i<=b*2; i+=2){
      c+=i;
    }
    cout << c << endl;
  }
  return 0;
}
