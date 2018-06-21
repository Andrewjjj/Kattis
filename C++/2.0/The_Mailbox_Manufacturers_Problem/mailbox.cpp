#include <iostream>
#include <cmath>

int main(){
  int total_loops;
  std::cin >> total_loops;

  for (int i=0; i<total_loops; i++){
    int a;
    float b;
    std::cin >> a >> b;

    for (int j=0; j<a-1; j++){
      b=std::ceil(b/2);
    }


  }
}
