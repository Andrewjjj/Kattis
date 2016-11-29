#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
  while (true){
    double a,b,c,d,e,f;
    cin >> a;
    if (a=0){
      break;
    }
    cin >> c >> b >> d >> e;
    f=pow(pow(abs(a-b),e)+pow(abs(c-d),e),0.5);
    cout << setprecision(10) << f << endl;
  }
  return 0;
}
