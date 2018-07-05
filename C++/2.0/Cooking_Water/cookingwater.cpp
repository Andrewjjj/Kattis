#include <iostream>

using namespace std;

int main(){
    int q, a, b, c{0}, d{1000};
    cin >> q;
    for (int i=0; i<q; i++){
        cin >> a >> b;
        if(a>c) c=a;
        if(b<d) d=b;
    }
    cout << ((c>d) ? "edward is right" : "gunilla has a point") << endl;
    return 0;
}
