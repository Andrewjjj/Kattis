#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double a;
  double pi = 3.141592653589793;
  cin >> a;

  // cout << pi << " L " << a << " L " << endl;
  double b;
  b=2*a*a;

  cout << fixed << setprecision(6);
  cout << a*a*pi << endl;
  cout << b << endl;

  return 0;
}
