#include <iostream>
#include <vector>

using namespace std;

int main(){

    int q,w,e,a;
    cin >> q >> w >> e;

    vector<int> damaged,reserved;
    damaged.resize(q+2,0);
    reserved.resize(q+2,0);

    for (int i=0; i<w; i++){
        int r;
        cin >> r;
        damaged.at(r)++;
        a++;
    }

    for (int i=0; i<e; i++){
        int r;
        cin >> r;
        reserved.at(r)++;
    }

    for (int i=1; i<q+1; i++){
        if (damaged.at(i)){
            if (reserved.at(i)){
                reserved.at(i) = 0;
                a--;
            }
            else if(reserved.at(i-1)){
                reserved.at(i-1) = 0;
                a--;
            }
            else if(reserved.at(i+1)){
                reserved.at(i+1) = 0;
                a--;
            }
        }
    }
    cout << a << endl;
    return 0;
}
