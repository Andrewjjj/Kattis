// string::find
#include <iostream>       // std::cout
#include <string>         // std::string

using namespace std;
int main ()
{
  int a;
  bool t;
  cin >> a;
  a+=1;
  string s="Simon says";
  for (int i=0; i<a; i++){
    string b;
    getline(cin, b);
    if(b.length()>=10){
      for(int j=0; j<10; j++){
        if(s[j]==b[j]){
          t=true;
          // cout << "Y" << endl;
        }
        else{
          // cout << "N" << endl;
          t=false;
          break;
        }
      }
    }
    else{
      t=false;
    }
    if(t==true){
      for(int k=10; k<b.length(); k++){
        cout << b[k];
      }
      cout << endl;
    }
  }

  return 0;
}
