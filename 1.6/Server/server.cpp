#include <iostream>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  int c[a];
  for (int i=0; i<a; i++){
    cin >> c[i];
  }
  int temp=0, count=0;
  for (int i=0; i<a; i++){
    if(temp+c[i]<=b){
      temp+=c[i];
      count++;
      // cout <<"i: " << i << " Temp: " << temp << " count: " << count << endl;
    }
    else{
      break;
    }
  }
  cout << count << endl;
  return 0;
}
