#include <iostream>

int main(){
  int n,a=2;
  std::cin >> n;
  for (int i=0;i<n;i++){
    // a+=std::pow(2,i);
    a+=(a-1);
    //std::cout << "a: " << a << ". i: " << std::pow(2,i) << std::endl;
  }
  std::cout << a*a << std::endl;
  return 0;
}
