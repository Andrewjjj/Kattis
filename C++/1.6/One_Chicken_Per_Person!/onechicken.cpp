#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b;
    c=b-a;
    if (c>0){
        if(c>1) cout << "Dr. Chaz will have " << c <<  " pieces of chicken left over!" << endl;
        else cout << "Dr. Chaz will have " << c <<  " piece of chicken left over!" << endl;
    }
    else{
       if(c<-1) cout << "Dr. Chaz needs " << c*-1 <<  " more pieces of chicken!" << endl;
       else cout << "Dr. Chaz needs " << c*-1 <<  " more piece of chicken!" << endl;
    }
    return 0;
}
