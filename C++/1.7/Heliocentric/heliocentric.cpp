#include <iostream>

using namespace std;

int main(){
    int a,b,caseNumber{1},days{0};
    while (cin >> a >> b){
        if(!(a==0&&b==0)){
            b+=(365-a);
            b=b%687;
            days+=(365-a);
            a=0;
        }
        while (!(a==0&&b==0)){
            b+=365;
            b=b%687;
            days+=365;
        }
        cout << "Case " << caseNumber << ": "<< days << endl;
        caseNumber++;
        days=0;
    }
    return 0;
}
