#include <iostream>

int main(){
  int a;
  while(std::cin >> a){
    if (a == 0){
      std::cout << 0 << std::endl;
    }
    else if (a == 1){
      std::cout << 1 << std::endl;
    }
    else{
      std::cout << a*2-2 << std::endl;
    }
  }
  return 0;
}
