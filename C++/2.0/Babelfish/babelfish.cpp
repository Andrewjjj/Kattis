/*================
 * This answer. just. sucks.
 * Revised version below
 ===============*/

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

void splitAndInsert(const string &a, unordered_map<string, string> *b){
    string w;
    string q;
    int count {0};
    for (int i=0; i<a.length(); i++){
        if(a[i] == ' ') {
            count++;
            w=q;
            q="";
            continue;
        }
        q += a[i];
    }

    (*b)[q] = w;
}

int main(){
    string a;
    unordered_map<string, string> list;
    while (getline(cin, a)){
        if (a=="") break;
        unordered_map<string, string> *listPtr = {nullptr};
        listPtr = &list;
        splitAndInsert(a, listPtr);

    }
//    cout << "W" << endl;
    while (getline(cin, a)){
        if (a=="") break;
        if(list[a] == "") cout << "eh" << endl;
        else cout << list[a] << endl;
    }
   return 0;
}

/*================
 * Revised version
 * ===============
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    string a,b,c;
    unordered_map<string, string> list;
    while (getline(cin, a) && a != ""){
        stringstream s(a);
        cin >> b >> c;
        list[c] = a;
    }
//    cout << "W" << endl;
    while (getline(cin, a) && a != ""){
       cout << (list[a] == "") ? "eh" : list[a] << endl;
    }
   return 0;
}
*/
