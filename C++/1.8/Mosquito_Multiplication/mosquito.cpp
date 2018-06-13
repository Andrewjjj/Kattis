#include <iostream>

using namespace std;

int main(){
    /* m = mostuitoe
     * p = pupae
     * l = larvae
     * e = # of eggs laid by 1 mosquito
     * r = only rth lava will transform into pupa
     * s = mosquito emerges from every s-th pupa
     * n = # of sunday
     * */

     /*********************************
     * mosquito lays eggs and die
     * pupa turns to mosquito
     * larva turns to pupa
     * eggs become larva
     * ******************************/

    int m,p,l,e,r,s,n,temp{0},egg{0};

    while (cin >> m >> p >> l >> e >> r >> s >> n){
        temp = egg = 0;
        for (int i=0; i<n; i++){
            egg=m*e;
            m=p/s;
            p=l/r;
            l=egg;
        }
        cout << m << endl;
    }
    return 0;
}
