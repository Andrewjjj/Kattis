#include <iostream>
#include <vector>

using namespace std;

int main(){
    string a;
    vector<string> b;
    while (cin >> a){
        b.push_back(a);
    }
    int ae{0};
    for (int i=0; i<b.size(); i++){
        for (int j=0; j<b[i].size()-1; j++){
            if ((b[i][j]) == 'a' && b[i][j+1] == 'e'){
                ae++;
                break;
            }
        }
    }
    if (static_cast<double>(ae)/b.size() >= 0.4){
        cout << "dae ae ju traeligt va";
    }
    else{
        cout << "haer talar vi rikssvenska";
    }
    cout << endl;
    return 0;
}
