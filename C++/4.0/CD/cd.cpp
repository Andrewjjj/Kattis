#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    int q,w;
    while ((cin >> q >> w) && q != 0 && w != 0){

        int sell{0},e;
        unordered_set<int> a;
        
        for (int i=0; i<q; i++){
            cin >> e;
            a.insert(e);
        }
        for (int i=0; i<w; i++){
            cin >> e;
            if(a.count(e)){
                sell++;
            }
        }
        cout << sell << endl;
    }
    return 0;
}
