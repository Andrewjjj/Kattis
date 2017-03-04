#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;
  for (int i=0;i<a;i++){
    int b,c;
    cin >> b >> c;
    char d[b][c];
    for (int j=0;j<b;j++){
      for (int k=0;k<c;k++){
        cin >> d[j][k];
      }
    }
    cout << "Test " << i+1 << endl;
    for (int j=b-1;j>=0;j--){
      for (int k=c-1;k>=0;k--){
        cout << d[j][k];
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
