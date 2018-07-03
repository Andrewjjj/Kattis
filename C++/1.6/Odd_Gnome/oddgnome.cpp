#include <iostream>

using namespace std;

int main(){
    int q;
    cin >> q;
    for (int j=0; j<q; j++){
        int a,b,c{0},found;
        cin >> a;
        for (int i=0; i<a; i++){
            cin >> b;
            if(i>0 && b-c!=1){
                found = i;
            }
            c=b;
        }
        cout << found << endl;
    }
    return 0;
}
