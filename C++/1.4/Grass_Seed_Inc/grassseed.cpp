#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double a,b,q=0;
  cin >> a >> b;
  for (int i=0; i<b; i++){
    double c,d;
    cin >> c >> d;
    q+=(c*d);
  }
  cout << fixed << setprecision(7) << q*a << endl;
  return 0;
}
