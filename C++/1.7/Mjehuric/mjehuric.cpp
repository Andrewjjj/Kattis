#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <int> a(5);
    for (int i=0; i<5; i++){
        cin >> a[i];
    }
    while (!is_sorted(a.begin(), a.end())){
        for (int i=0; i<4; i++){
            if (a[i]>a[i+1]){
                swap(a[i],a[i+1]);
                for (int i=0; i<4; i++){
                    cout << a[i] << " ";
                }
                cout << a[4] << endl;
            }
        }

    }
    return 0;
}
