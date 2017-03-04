#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;
  int b = a%2;
  if (b==0){
    cout << "Bob" << endl;
  }
  else if (b==1){
    cout << "Alice" << endl;
  }
}
