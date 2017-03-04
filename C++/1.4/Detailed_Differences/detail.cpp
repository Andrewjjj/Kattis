#include <iostream>
#include <string>
using namespace std;

int main(){
  int a;
  cin >> a;
  cin.ignore();
  for (int q=0; q<a; q++){
    string b;
    string c;
    getline(cin, b);
    getline(cin, c);
    char d[b.length()];
    for(int i=0; i<b.length(); i++){
      if(b.at(i)==c.at(i)){
        d[i]='.';
      }
      else{
        d[i]='*';
      }
    }
    d[b.length()]=0;
    // for (int i=0; i<b.length(); i++){
    //   cout << d[i];
    // }
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << endl;
  }
  return 0;
}
