#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int a;
    vector<string> list;
    unordered_set<string> checkList;
    cin >> a;
    for (int i=0; i<a; i++){
        string uni,team;
        cin >> uni >> team;
        if(!checkList.count(uni) && list.size()<12){
            checkList.insert(uni);
            list.push_back(uni + " " + team);
        }
     }
    for (string w: list){
        cout << w << endl;
    }
    return 0;
}
