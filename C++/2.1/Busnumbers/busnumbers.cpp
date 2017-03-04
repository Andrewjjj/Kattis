#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;
  bool b[1002];
  for(int i=0; i<1002; i++){
    b[i]=false;
  }
  // b[1001]=false;
  for (int i=0; i<a; i++){
    int c;
    cin >> c;
    b[c]=true;
  }
  for (int i=0; i<1001; i++){
    if(b[i]==true){
      cout << i;
      int d=i;
      while(b[i+1]==true){
        i++;
        // cout << "i: "<< i << endl;
      }
      if(i-d>=2){
        // cout << "1" << endl;
        cout << "-" << i;
      }
      else if(d==i){
        // cout << "2" << endl;
      }
      else{
        // cout << "3" << endl;
        cout <<" "<< i;
      }
      cout << " ";
    }
  }
  // for (int i=0; i<1000; i++){
  //   cout << i << " ";
  // }
  // cout << endl;
  return 0;
}
