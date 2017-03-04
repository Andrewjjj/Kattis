#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;
  int b[a];
  for (int i=0;i<a;i++){
    cin >> b[i];
  }
  for (int i=0;i<a;i++){
    if (b[i]%2 == 0){
      cout << b[i] << " is even" << endl;
    }
    else {
      cout << b[i] << " is odd" << endl;
    }
  }
}
