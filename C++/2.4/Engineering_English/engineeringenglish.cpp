#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>

 using namespace std;

 int main(){

     string a;
     unordered_set<string> list;

     while(getline(cin, a)){
         string b,d;
         for (auto c: a){
             if(c != ' ') b+=c;
             else{
                 d=b;
                 transform(b.begin(), b.end(), b.begin(), ::tolower);
                 cout << (!list.count(b) ? d : ".") << " ";
                 list.insert(b);
                 b.erase();
             }
         }
         d=b;
        transform(b.begin(), b.end(), b.begin(), ::tolower);
        cout << (!list.count(b) ? d : ".") << " ";
        list.insert(b);
        b.erase();
        cout << endl;
     }
     cout << endl;
     return 0;
 }
