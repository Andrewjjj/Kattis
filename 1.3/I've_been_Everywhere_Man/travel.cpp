#include <iostream>
#include <string>
using namespace std;

int main(){
  int a;
  cin >> a;
  for (int i=0; i<a; i++){
    int b,c=0;
    cin >> b;
    string str[b];
    for (int j=0; j<b; j++){
      cin >> str[j];
      for (int k=0; k<j; k++){
        if (str[j]==str[k]){
          str[j]="invalid";
        }
      }
    }
    for (int k=0; k<b; k++){
      if(str[k]!="invalid"){
        c++;
      }
    }
    cout << c << endl;
  }
  return 0;
}
