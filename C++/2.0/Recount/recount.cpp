#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<string, int> list;

    int m {0},totalSize{0};
    string winner;
    string a;

    while(true){
        getline(cin, a);
        if(a == "***") break;
        list[a]++;
        totalSize++;
    }
    for (auto key: list){
        if(key.second>m){
            m = key.second;
            winner = key.first;
        }
        else if(key.second == m){
            winner = "Runoff!";
        }
    }
    cout << winner << endl;
    return 0;
}
