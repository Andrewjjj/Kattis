#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i=0; i<q; i++){
        string a;
        cin >> a;
        int cValue = sqrt(a.length());
        for (int j=cValue-1; j>=0; j--){
            for (int k=0; k<cValue; k++){
                cout << a[(k*cValue)+j];
            }
        }
        cout << endl;
    }
    return 0;
}
