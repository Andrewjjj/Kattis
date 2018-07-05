#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b;
    c=b-a;
    if(a>b) d=c+360;
    else d=c-360;
    if(abs(c)==abs(d)) cout << abs(c) << endl;
    else cout << (min(abs(c), abs(d))==abs(c) ? c : d) << endl;
    return 0;
}
