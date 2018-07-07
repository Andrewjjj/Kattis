#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    vector<int> list;
    list.resize(26, 0);
    string a;
    cin >> a;
    for (auto c: a){
        list[c-'a']++;
    }

    sort(list.rbegin(), list.rend());

    cout << a.size() - (list[0]+list[1]) << endl;

    return 0;
}
