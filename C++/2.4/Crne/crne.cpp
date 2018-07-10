#include <iostream>
#include <cmath>
using namespace std;

int main(){

    long double a;
    cin >> a;
    cout << fixed << static_cast<long long int>(floor((a/2)+1)*ceil((a/2)+1)) << endl;

    return 0;
}
