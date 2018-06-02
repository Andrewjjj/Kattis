#include <iostream>

int main(){
  int q,a,b,c;
  std::cin >> q;
  while(q--){
    std::cin>>a>>b>>c;
    if (b>a+c){
      //yes
      std::cout << "advertise" << std::endl;
    }
    else if (b<a+c){
      //no
      std::cout << "do not advertise" << std::endl;
    }
    else{
      //doesn't matter
      std::cout << "does not matter" << std::endl;
    }
  }
  return 0;
}
