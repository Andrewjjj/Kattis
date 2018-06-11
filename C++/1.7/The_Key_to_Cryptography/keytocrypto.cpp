#include <iostream>
#include <string>

using namespace std;

int main(){
    string a = "";
    string b = "";
    string ans = "";
    cin >> a >> b;
    for (int i=0; i<a.length(); i++){
        int num = (a[i]-b[i]);
        if (num<0){
            num += 26;
        }
        ans.append(1,char(num+65));
        b.append(1,(ans[i]));
    }
    cout << ans << endl;
    return 0;
}
