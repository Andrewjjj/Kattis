#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    cout << (((e%2 == ((abs(c-a)+abs(d-b))%2)) && (abs(c-a)+abs(d-b)) <= e) ? "Y" : "N") << endl;

    return 0;
}
