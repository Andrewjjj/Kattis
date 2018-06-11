#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    cout << d+floor(double(c*(b-a))/double(e))+1 << endl;
    return 0;
}
