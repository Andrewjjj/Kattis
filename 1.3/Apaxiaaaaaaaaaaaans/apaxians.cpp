#include <iostream>
#include <string>
using namespace std;

int main(void){
  string a;
  int c=1;
  cin >> a;
  char b[a.length()];
  b[0]=a.at(0);

  for (int i=1; i<a.length(); i++){
    if(a.at(i) != a.at(i-1)){
      b[c]=a.at(i);
      c++;
    }
  }
  b[c]=0;
  cout << b << endl;
  return 0;
}
