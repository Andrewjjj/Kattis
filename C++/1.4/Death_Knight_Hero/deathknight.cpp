#include <iostream>
#include <string>

using namespace std;

int main() {
    int q,w;
    cin >> q;
    w=q;
    for (int i=0; i<q; i++){
        string a;
        cin >> a;
        for (int j=0; j<a.length()-1; j++){
            if (a[j]=='C'){
                if (a[j+1]=='D'){
                    w--;
                    break;
                }
            }
        }
    }
    cout << w << endl;

    return 0;
}
