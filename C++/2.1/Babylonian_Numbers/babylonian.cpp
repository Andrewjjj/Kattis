#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int q;
    cin >> q;
    for (int i=0; i<q; i++){
        string a,b;
        vector<int> list;
        long long int total{0};

        cin >> a;
        for (char c: a){
            if(c != ',') {
                b+=c;
            }
            else{
                if(!b.empty()){
                    list.push_back(stoi(b));
                    b.erase();
                }
                else{
                    list.push_back(0);
                }
            }
        }
        if(!b.empty()){
            list.push_back(stoi(b));
            b.erase();
        }
        else{
            list.push_back(0);
        }

        int g = list.size()-1;
        for(auto d: list){
            total+=d*pow(60, g);
            g--;
        }
       cout << total << endl;
    }

    return 0;
}
