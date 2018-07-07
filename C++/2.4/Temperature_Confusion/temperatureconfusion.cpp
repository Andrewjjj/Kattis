#include <iostream>
#include <string>

using namespace std;

long long int gcd(long long int a, long long int b){
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    long long int a,b,q{0};
    string c,d;
    cin >> d;
    for (char e: d){
        if(e!='/'){
            c+=e;
            q++;
        }
        else {
            d.erase(d.begin(),d.begin()+q+1);
            break;
        }
    }

    a=(stoll(c)-(32*stoll(d)))*5;
    b=stoll(d)*9;

    bool sign=false;
    if(a<0){
        sign = true;
        a*=-1;
    }

    long long int g=gcd(a,b);

    if (sign) a*=-1;

    cout << a/g << "/" << b/g << endl;

    return 0;
}
