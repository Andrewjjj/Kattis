#include <iostream>

using namespace std;

int main(){
    int w,l;
    while(true){
        cin >> w >> l;
        if (w==0 && l==0){
            return 0;
        }
        int q,pos1[2] {0}, pos2[2] {0};
        cin >> q;
        for (int i=0; i<q; i++){
            char a;
            // pos1 = robot thinks. pos2 = actual
            int b;
            cin >> a >> b;
            if (a == 'u'){
                pos1[1] += b;
                pos2[1] += b;
            }
            else if (a == 'd'){
                pos1[1] -= b;
                pos2[1] -= b;
            }
            else if (a== 'l'){
                pos1[0] -= b;
                pos2[0] -= b;
            }
            else{
                pos1[0] += b;
                pos2[0] += b;
            }
            if (pos2[0]>w-1){
                pos2[0] = w-1;
            }
            else if(pos2[0]<0){
                pos2[0] = 0;
            }
            if(pos2[1]>l-1){
                pos2[1] = l-1;
            }
            else if (pos2[1]<0){
                pos2[1]=0;
            }
        }
        cout << "Robot thinks " << pos1[0] << " " << pos1[1] << endl;
        cout << "Actually at " << pos2[0] << " " << pos2[1] << endl;

    }
    return 0;
}
