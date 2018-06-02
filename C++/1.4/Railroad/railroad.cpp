#include <iostream>

int main(){
  int x,y;
  std::cin >> x >> y;
  if (y%2 == 1){
    std::cout << "impossible";
  }
  else{
    std::cout << "possible";
  }
  std::cout<<std::endl;
  return 0;
}
