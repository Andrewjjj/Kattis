#include <iostream>
#include <set>
using namespace std;

int main(){
    set<string> nameSet;
    set<string>::iterator it;
    
    int b;
    cin >> b;
    for (int i=0; i<b; i++){
        string q,name;
        cin >> q >> name;
        it = nameSet.find(name);
        cout << name;
        if (q == "entry"){
            cout << " entered";
            if (it != nameSet.end()){
                cout << " (ANOMALY)";
            }
            else{
                nameSet.insert(name);
            }
        }
        else{
            cout << " exited";
            if (it != nameSet.end()){
                nameSet.erase(it);
            }
            else{
                cout << " (ANOMALY)";
            }
        }
        cout << endl;
    }
    return 0;
}
