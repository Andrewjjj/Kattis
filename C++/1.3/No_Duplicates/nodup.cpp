#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a, b;
    vector<string> words;
    getline(cin, a);
    for (char c: a){
        if (c == ' '){
            words.push_back(b);
            b.erase();
        }
        else{
            b+=c;
        }
    }
    words.push_back(b);
    bool repeat=false;
    for (string w: words){
        int counter{0};
        for (string e: words){
            if (w==e){
                counter++;
            }
            if (counter>=2){
                repeat = true;
            }
        }
    }
    cout << ((repeat == false) ? "yes" : "no") << endl;
    return 0;
}
