#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

 using namespace std;

 int main(){

     int q;
     cin >> q;

     for (int i=0; i<q; i++){
        cin.ignore();
         int a,b;
         vector<int> c,d;
         cin >> a >> b;
         for (int i=0; i<a; i++){
             int w;
             cin >> w;
             c.push_back(w);
         }
         for (int i=0; i<b; i++){
             int w;
             cin >> w;
             d.push_back(w);
         }
         sort(c.rbegin(), c.rend());

         float e = accumulate(c.begin(), c.end(), 0)/static_cast<float>(c.size());
         float f = accumulate(d.begin(), d.end(), 0)/static_cast<float>(d.size());

        int z=0;
        
         for (auto r: c){
             if(r<e && r>f) z++;
         }
         cout << z << endl;
     }

     return 0;
 }
