#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    string a;
    vector<string> lines;
    int n {0}, sum{0};
    while (getline(cin, a)){
        lines.push_back(a);
        if (a.length()>n) n=a.length();
    }
    lines.pop_back();
    for (auto line: lines){
        sum+=pow(n-line.length(), 2);
    }
    cout << sum << endl;
    return 0;
}
