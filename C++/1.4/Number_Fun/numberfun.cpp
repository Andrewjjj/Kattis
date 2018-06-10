#include <iostream>

using namespace std;

int main() {
    int q;
    cin>>q;
    for (int i=0; i<q; i++){
        float a,b,c;
        cin >> a >> b >> c;
        if (a+b==c){
            cout << "Possible";
        }
        else if (a-b==c || b-a==c){
            cout << "Possible";
        }
        else if (a*b==c){
            cout << "Possible";
        }
        else if (a/b==c || b/a==c){
            cout << "Possible";
        }
        else{
            cout << "Impossible";
        }
        cout << endl;
    }
    return 0;
}
