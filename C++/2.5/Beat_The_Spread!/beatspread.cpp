#include <iostream>

using namespace std;

int main(){
    int q;
    cin >> q;
    for (int i=0; i<q; i++){
        int a,b,x,y;
        cin >> a >> b;
        x=static_cast<int>((a/2.0)+(b/2.0));
        y = x-b;
        if (x+y == a && x-y == b){
            if (y>=0) cout << x << ' ' << y << endl;
            else cout << "impossible" << endl;
        }
        else cout << "impossible" << endl;
    }
    return 0;
}
