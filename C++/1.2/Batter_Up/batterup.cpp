//NOT COMPLETED

#include <iostream>

int main(){
  float division=0,numbers[3]={0},temp1=0,temp2=0;
  std::cin >> temp1;
  division = temp1;
  for (int i=0; i<temp1; i++){
    std::cin >> numbers[i];
    if (numbers[i]==-1){
      division--;
    }
    else{
      temp2 += numbers[i];
    }
  }
  // float result = temp2/division;
  std::cout << temp2/division << std::endl;

  return 0;
}
