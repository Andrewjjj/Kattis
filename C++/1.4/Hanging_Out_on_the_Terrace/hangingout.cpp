#include <iostream>
#include <string>

using namespace std;

int main() {
    int safetyLimit, loopTotal, groupsDenied {0}, peopleInside {0};
    cin >> safetyLimit >> loopTotal;

    for (int i=0; i<loopTotal; i++){
        string a {};
        int b;
        cin >> a >> b;
        if (a == "enter"){
            if (b+peopleInside>safetyLimit){
                groupsDenied++;
            }
            else{
                peopleInside += b;
            }
        }
        else{
            peopleInside -= b;
        }
//        cout << b << " : " << peopleInside << " : " << groupsDenied << endl;
    }
    cout << groupsDenied << endl;
    return 0;
}
