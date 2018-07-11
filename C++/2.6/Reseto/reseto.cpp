#include <iostream>
#include <vector>
using namespace std;

int main(){

    int a,b,c{0};
    cin >> a >> b;
    vector<int> v;
    v.resize(a+1,1);
    for (int i=2; i<v.size(); i++){
        int p;
        if (v.at(i)) p=i;
        for (int j=p; j<v.size(); j+=p){
            if (j%p == 0 && v.at(j)){
                v.at(j) = 0;
                c++;
                if(c == b){
                    cout << j << endl;
                    return 0;
                }
            }
        }

    }
    return 0;
}
