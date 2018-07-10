#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
    int a;
    cin >> a;

    vector<int> list;
    vector<int> v;
    list.resize(6,0);
    for (int i=0; i<a; i++){
        int q;
        cin >> q;
        list.at(q-1)++;
        v.push_back(q);
    }
    reverse(list.begin(), list.end());
    for(int i=0; i<6; i++){
        if (list[i] == 1){
            vector<int>::iterator it;
            it = find(v.begin(), v.end(), 6-i);
            if (it != v.end()){
                auto index = distance(v.begin(), it);
                cout << index+1 << endl;
                return 0;
            }
            else cout << "none" << endl;
            break;
        }
    }
    cout << "none" << endl;
    return 0;
}
