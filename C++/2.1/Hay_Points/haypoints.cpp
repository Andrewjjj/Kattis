#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(){
    map<string, long int> list;
    int q,w;
    cin >> q >> w;
    for (int i=0; i<q; i++){
        string a;
        int b;
        cin >> a >> b;
        list[a] = b;
    }

    for (int i=0; i<w; i++){
        string a;
        int b{0};
        while((cin >> a) && a != "."){
            b+=list[a];
        }
        cout << b << endl;
    }
    return 0;
}
