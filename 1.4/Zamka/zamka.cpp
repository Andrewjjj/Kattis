#include <iostream>
using namespace std;

int main(){
  int a,b,c,d[10000];
  cin >> a >> b >> c;
  for (int i=a; i<=b; i++){
    int a1=i%10;
    int a2=i%100%10;
    int a3=i%1000%100%10;
    int a4=i%10000%1000%100%10;
    cout << "i: " << i << " Numbers: "<< a1 << " " << a2 << " " << a3 << " " << a4 << endl;
  }
}
