#include <iostream>
#include <string>
using namespace std;

// int getDigit(long long int a){
//   int b=0;
//   while(a!=0){
//     a=a/10;
//     b++;
//   }
//   return b;
// }

int main(){
  int a;
  cin >> a;
  cin.ignore();
  for (int i=0; i<a; i++){
    string b;
    getline(cin, b);
    // cin >> b;
    cout << b.length() << endl;
  }
  return 0;
}
