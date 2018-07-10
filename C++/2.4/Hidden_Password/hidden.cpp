#include <iostream>
#include <string>
#include <vector>

 using namespace std;

 int main(){

     string a,b;
     cin >> a >> b;
     int count{0};

    vector<int> s;
    s.resize(26,0);

     for (char c: a){
         s[c-'A']++;
     }
     for (char c: b){
         if (s[c-'A']){
             if(count<a.size()){
                 if(a.at(count) == c) {
                     count++;
                     s[c-'A']--;
                 }
                 else break;
             }
         }
     }
     cout << (count == a.size() ? "PASS" : "FAIL") << endl;
     return 0;
 }
