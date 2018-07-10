#include <iostream>

using namespace std;

const int m =  9;
const int n = 40;

int rotation(int a, int b, bool left){
    if (left)
        if (a>b) return m*(a-b);
        else if (a<b) return m*(a+n-b);
        else return 0;
    else
        if (b>a) return m*(b-a);
        else if (b<a) return m*(b+n-a);
        else return 0;
    return 0;
}

int main(){
    int a,b,c,d;
    while (cin >> a >> b >> c >> d && a+b+c+d != 0){
        int e{0};
        e+=rotation(a,b,true)+rotation(b,c, false)+rotation(c,d,true)+3*m*n;
        cout << e << endl;
    }
    return 0;
}
