#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(){

    string a;
    while(getline(cin, a)){
        string b;
        for(char c: a){
             b += bitset<7>(c).to_string();
        }
        bool q = false,w = false;
        for (char c: b){
            if(c=='1'){
                if (!q) q=true;
                else q=false;
            }
            else{
                if (!w) w=true;
                else w = false;
            }
        }
        cout << ((q||w) ? "trapped" : "free") << endl;
    }

    return 0;
}
