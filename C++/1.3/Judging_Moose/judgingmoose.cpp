#include <iostream>

int main(){
  int a,b;
  std::cin >> a >> b;
  if (a==b){
    if (a==0){
      std::cout << "Not a moose" << std::endl;
      return 0;
    }
    std::cout << "Even " << a*2 << std::endl;
  }
  else{
    std::cout << "Odd ";
    if (a>b){
      std::cout << a*2;
    }
    else{
      std::cout << b*2;
    }
    std::cout << std::endl;
  }

  return 0;
}
