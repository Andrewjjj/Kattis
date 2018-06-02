#include <iostream>

int main(){
  int a,b,c;
  std::cin >> a;
  std::cin >> b;
  if (a>0 && b>0){
    c=1;
  }
  else if (a<0 && b>0){
    c=2;
  }
  else if (a<0 && b<0){
    c=3;
  }
  else{
    c=4;
  }
  std::cout << c << std::endl;
  return 0;
}
