#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){

    string a;
    unordered_map<string, int> m;
    cout << boolalpha;

    while (cin >> a){
        if (a == "define"){
            int b;
            string c;
            cin >> b >> c;
            m[c] = b;
        }
        else {
            string b,c;
            char d;
            cin >> b >> d >> c;
            if(!(m.count(b) && m.count(c))){
                cout << "undefined" << endl;
                continue;
            }
            else{
                if (d == '>'){
                    cout << (m[b] > m[c]) << endl;
                }
                else if (d == '<'){
                    cout << (m[b] < m[c]) << endl;
                }
                else{
                    cout << (m[b] == m[c]) << endl;
                }
            }
        }
    }

    return 0;
}
