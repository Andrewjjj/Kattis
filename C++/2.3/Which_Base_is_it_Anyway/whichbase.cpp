#include <iostream>
#include <string>

using namespace std;

int main(){

    int q;
    cin >> q;
    for (int i=0; i<q; i++){
        long long int a,b,c,e;
        string w;
        bool d=true;

        cin >> a >> b;
        w=to_string(b);

        for (auto q: w){
            if(q== '8' || q == '9'){
                d=false;
            }
        }
        if (d) c=stoll(w,nullptr,8);
        else c=0;
        e=stoll(w,nullptr,16);
        cout << a  << " "<< c << " " << w << " " << e << endl;
    }
    return 0;
}
