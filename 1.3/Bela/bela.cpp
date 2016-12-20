#include <iostream>
using namespace std;

int main(){
  int w;
  char e;
  cin >> w >> e;
  int a=0;
  int dom[8]={11,4,3,20,10,14,0,0};
  int notdom[8]={11,4,3,2,10,0,0,0};
  char v[8]={'A','K','Q','J','T','9','8','7'};
  for (int q=0; q<(4*w); q++){
    char b,c;
    cin >> b >> c;
    for (int t=0; t<8; t++){
      if(v[t]==b){
        if(c==e){
          a+=dom[t];
          break;
        }
        else{
          a+=notdom[t];
          break;
        }
      }
    }
  }
  cout << a << endl;
  return 0;
}
