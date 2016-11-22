// string::find
#include <iostream>       // std::cout
#include <string>         // std::string

using namespace std;
int main ()
{
  int a;
  string b;
  cin >> a;
  for (int i=0; i<a; i++){
    cin >> b;
  }

  // different member versions of find in the same order as above:
  int c = b.find("Simon says");
  cout << "first 'Simon says' found at: " << c << '\n';
  return 0;
}
