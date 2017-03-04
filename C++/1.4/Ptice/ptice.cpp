#include <iostream>
using namespace std;

int main(){
  string a = "ABC";
  string b = "BABC";
  string c = "CCAABB";
  int d,q[3],w=0;
  for (int i=0; i<3; i++){
    q[i]=0;
  }
  cin >> d;
  char e[d];

  for (int i=0; i<d; i++){
    cin >> e[i];
  }
  for (int i=0; i<d; i++){
    if(a.at(i%3)==e[i]){
      q[0]+=1;
    }
    if(b.at(i%4)==e[i]){
      q[1]+=1;
    }
    if(c.at(i%6)==e[i]){
      q[2]+=1;
    }
  }
  for (int i=0; i<3; i++){
    if(q[i]>w){
      w=q[i];
    }
  }
  cout << w << endl;
  for (int i=0; i<3; i++){
    if(q[i]==w){
      if(i==0){
        cout << "Adrian" << endl;
      }
      else if(i==1){
        cout << "Bruno" << endl;
      }
      else if(i==2){
        cout << "Goran" << endl;
      }
    }
  }
  return 0;
}
