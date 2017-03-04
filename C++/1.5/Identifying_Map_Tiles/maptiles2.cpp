#include <iostream>
#include <string>
using namespace std;
// int getNumber(char a){
//   if(a.at(0)==0){
//     return
//   }
// }

int fX(char a){
  if(a=='0'){
    return 0;
  }
  else if(a=='1'){
    return 1;
  }
  else if(a=='2'){
    return 0;
  }
  else if(a=='3'){
    return 1;
  }
}

int fY(char a){
  if(a=='0'){
    return 0;
  }
  else if(a=='1'){
    return 0;
  }
  else if(a=='2'){
    return 1;
  }
  else if(a=='3'){
    return 1;
  }
}


int main(){
  string a;
  getline(cin, a);
  int cX[a.length()]={0};
  int cY[a.length()]={0};
  for (int i=0; i<a.length(); i++){
    cX[i]=fX(a.at(i));
    cY[i]=fY(a.at(i));
  }
  int aX=0;
  int aY=0;
  int q=1;
  for(int i=a.length()-1; i>=0; i--){
    aX+=cX[i]*q;
    aY+=cY[i]*q;
    q*=2;
  }
  cout << a.length() << " " << aX << " " << aY << endl;
  return 0;
}
