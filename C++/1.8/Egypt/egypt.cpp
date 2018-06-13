#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> a;
    vector<int> b(3,3);
    a.resize(3);
    while(true){
        for (int i=0; i<3; i++){
            cin >> a[i];
        }
        if (a[0] == 0 && a[1] == 0 && a[2] == 0){
            break;
        }
        sort(a.begin(), a.end());
        if (a[0]*a[0]+a[1]*a[1] == a[2]*a[2]){
            cout << "right";
        }
        else{
            cout << "wrong";
        }
    cout << endl;
    }
    return 0;
}
