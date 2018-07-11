#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int q;
    cin >> q;
    for (int i=0; i<q; i++){
        int w;
        cin >> w;

        vector<long int> listA, listB, a, b;
        for (int i=0; i<w; i++){
            long int e;
            cin >> e;
            listA.push_back(e);
        }
        for (int i=0; i<w; i++){
            long int e;
            cin >> e;
            listB.push_back(e);
        }

        sort(listA.begin(), listA.end());
        sort(listB.rbegin(), listB.rend());

        long int c{0};
        for (int j=0; j<w; j++){
            c+=listA.at(j)*listB.at(j);
        }
        cout << "Case #" << i+1 << ": " << c << endl;
    }

    return 0;
}
