#include <iostream>
#include <string>

int main(){

  std::string str = "";
  std::cin >> str;
  std::string hissok = "no hiss";
  for (int i=0; i<str.length()-1; i++){
    if (str[i] == 's' && str[i+1] == 's'){
      hissok = "hiss";
      break;
    }
  }
  std::cout << hissok << std::endl;
  return 0;
}
