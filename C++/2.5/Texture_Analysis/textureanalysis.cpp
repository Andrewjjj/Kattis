#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    int q{1};
    while (cin >> a && a!="END"){
        int count{0}, countQ{0};
        bool b {true}, initialB{true}, initialE{true};

        for (auto c: a){
            if (initialB && initialE){
                if (c == '*') initialB = false;
            }
            else if (!initialB && initialE){
                if (c == '.') count++;
                else initialE = false;
            }
            else{
                if(c == '.') countQ++;
                else{
                    if(countQ!=count){
                        b = false;
                        break;
                    }
                    else countQ = 0;
                }
            }
        }
        cout << q << (b ? " EVEN" : " NOT EVEN") << endl;
        q++;
    }

    return 0;
}
