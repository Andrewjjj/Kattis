#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int q,w;
    while(cin >> q && q != 0){
        vector<int> v;;
        for (int i=0; i<q; i++){
            cin>>w;
            v.push_back(w);
        }
        cin.ignore();

        string a,b;
        getline(cin, a);
        int e=ceil(a.length()/static_cast<float>(q));
        for (int i=0; i<e; i++){
            for (int j=0; j<q; j++){
                b+=((v[j]+(i*q)) > a.size()) ?  ' ' : a.at(v[j]+(i*q)-1);
            }
        }
        cout << '\'' <<  b <<  '\'' << endl;
    }
    return 0;
}
