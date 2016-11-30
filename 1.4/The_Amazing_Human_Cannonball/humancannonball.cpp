#include <iostream>
#include <cmath>
using namespace std;

// int getx(int )

int main(){
  int a;
  cin >> a;
  for (int q=0; q<a; q++){
    float v,x1,h1,h2;
    float ang;
    cin >> v >> ang >> x1 >> h1 >> h2;
    ang=(ang*(3.14159)/180);
    // cout << "Ang: " << ang << endl;
    float t=x1/(v*cos(ang));
    // cout << "t: " << t << endl;
    float h3=((v*t*sin(ang))-(0.5*9.81*t*t));
    // cout << "Values: " << endl;
    // cout << (v*t*sin(ang)) << endl;
    // cout << (0.5*-9.81*t*t) << endl;
    // cout << "h1: " << h1 << endl;
    // cout << "h2: " << h2 << endl;
    // cout << "h3: " << h3 << endl;
    if(h1+1<=h3 && h2>=h3+1){
      cout << "Safe" << endl;
    }
    else{
      cout << "Not Safe" << endl;
    }
  }
}
