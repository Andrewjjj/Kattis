#include <iostream>
#include <string>
using namespace std;

int main(){
  char a[100];
  cin.getline(a, 100);
  string s=a;
  char f[s.length()];
  for (int i=0; i<s.length(); i++){
    f[i]=0;
  }
  int b=0;
  // cout << s <<" : "<< s.length() << endl;
  for (int i=0; i<s.length(); i++){
    if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
      f[b]=a[i];
      i+=2;
    }
    else{
      f[b]=a[i];
    }
    b++;
  }
  for (int i=0; i<s.length(); i++){
    cout << f[i];
  }
  cout << endl;
  return 0;
}
