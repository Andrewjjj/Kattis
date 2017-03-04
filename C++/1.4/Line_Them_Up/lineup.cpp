#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;
  string b[a];
  for (int i=0; i<a; i++){
    cin >> b[i];
    cout << b[i] << endl;
  }
  for (int i=0; i<a-1; i++){
    int l;
    if(b[i].length()>b[i+1].length()){
      l=b[i+1].length();
    }
    else{
      l=b[i].length();
    }
    for (int j=0; j<l; j++){
      // b
    }
  }
}
