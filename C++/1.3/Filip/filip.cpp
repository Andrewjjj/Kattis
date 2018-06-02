#include <iostream>
#include <algorithm>
// #include <string>
int main(){
  // int a,b;
  std::string a,b,c,temp;
  std::cin >> a >> b;
  //
  // std::cout << a;
  std::reverse(std::begin(a),std::end(a));
  std::reverse(std::begin(b),std::end(b));

  int q = stoi(a,0),w = stoi(b,0);

  if (q>w){
    std::cout << q;
  }
  else{
    std::cout << w;
  }
  // // std::cout << c;
  // for (int i=c.length()-1; i>=0; i--){
  //   std::cout << c[i];
  // }
  std::cout<<std::endl;
  return 0;
}
