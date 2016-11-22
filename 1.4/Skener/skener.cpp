#include <iostream>
using namespace std;

int main(){
  int a,b,c,d;

  cin >> a >> b >> c >> d;
  char e[a][b];

  for (int i=0;i<a;i++){
    for (int j=0;j<b;j++){
      cin >> e[i][j];
    }
  }
  for (int i=0; i<a; i++){
    for (int j=0; j<c; j++){
      for (int k=0; k<b; k++){
        for (int l=0; l<d; l++){
          cout << e[i][k];
        }
      }
      cout << endl;
    }
  }
  return 0;
}
