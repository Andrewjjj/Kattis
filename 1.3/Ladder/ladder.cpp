#include <iostream>
#include <math.h>

using namespace std;
int main(){
  double a,b;
  cin >> a >> b;
  b=b*(2*3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214)/360;
  cout << ceil(a/sin(b)) << endl;
}
