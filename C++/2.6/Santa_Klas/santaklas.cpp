#include <iostream>
#include <cmath>

#define PI 3.1415926535

using namespace std;

int main(){

    int a,b;
    cin >> a >> b;
    if (b>=0 && b<=180) cout << "safe" << endl;
    else{
        cout << static_cast<int>(a/sin((b-180)*(PI/180))) << endl;
    }

    return 0;
}
