#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a=0, b=0, c=0, d=0, vmax=0, count=0;
  cin >> a >> b >> c >> d;
  int e[3]={0};
  for (int i=0; i<3; i++){
    cin >> e[i];
    if (e[i] > vmax){
      vmax=e[i];
    }
  }
  // cout << "vmax: " << vmax << endl;
  int f[vmax] = {0};
  count=0;
  while (count<vmax){
    for (int i=0; i<a; i++){
      if(count>vmax){
        break;
      }
      f[count]++;
      count++;
    }
    for (int i=0; i<b; i++){
      if(count>vmax){
        break;
      }
      count++;
    }
  }

  count=0;
  if(vmax > c || vmax > d){
    while (count<vmax){
      for (int i=0; i<c; i++){
        if(count>vmax){
          break;
        }
        f[count]++;
        count++;
      }
      for (int i=0; i<d; i++){
        if(count>vmax){
          break;
        }
        count++;
      }
    }
  }

  // cout << "vmax: "<< vmax << endl;
  // for (int i=0; i<vmax; i++){
  //   cout << "f: " << f[i] << " i: " << i << endl;
  // }
  for (int i=0; i<3; i++){
    // cout << i << "ei: " << e[i] << "//" << "f[ei]: "<< f[e[i]-1] << endl;
    if(f[e[i]-1]==0){
      cout << "none" << endl;
    }
    else if(f[e[i]-1]==1){
      cout << "one" << endl;
    }
    else if(f[e[i]-1]==2){
      cout << "both" << endl;
    }
  }
  return 0;
}
