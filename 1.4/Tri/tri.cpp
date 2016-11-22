#include <iostream>

using namespace std;

int calculate(int a, int b, int c){
  if ((b+c) == a){
    cout << a << "=" << b << "+" << c << endl;
    return 0;
  }
  else if ((a+b) == c){
    cout << a << "+" << b << "=" << c << endl;
    return 0;
  }
  else if ((b-c) == a){
    cout << a << "=" << b << "-" << c << endl;
    return 0;
  }
  else if ((a-b) == c){
    cout << a << "-" << b << "=" << c << endl;
    return 0;
  }
  else if ((b*c) == a){
    cout << a << "=" << b << "*" << c << endl;
    return 0;
  }
  else if ((a*b) == c){
    cout << a << "*" << b << "=" << c << endl;
    return 0;
  }
  else if(b!=0 && c!=0){
    if ((b/c) == a){
      cout << a << "=" << b << "/" << c << endl;
      return 0;
    }
  }
  else if(a!=0 && b!=0){
    if ((a/b) == c){
      cout << a << "/" << b << "=" << c << endl;
      return 0;
    }
  }

}
int main(){
  int a,b,c;
  cin >> a >> b >> c;

  calculate(a,b,c);

  return 0;
}
