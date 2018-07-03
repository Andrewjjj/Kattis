#include <iostream>
#include <string>

using namespace std;

const int ASCII_NUM=65;
const int ALPHABET_COUNT=26;

char moveForward(char, int);
char addCharacters(char, char);
string drm(string, string);
string drmInt (string);

int main() {
    string a;
    cin >> a;
    string b{a,a.length()/2};
    a.erase(a.length()/2,a.length());
    cout << drm(a,b) << endl;
    return 0;
}

string drm (string a, string b){
    a=drmInt(a);
    b=drmInt(b);
    string c;
    for (int i=0; i<a.length(); i++){
        c+=addCharacters(a[i],b[i]);
    }
    return c;
}

string drmInt (string a){
    int q{0};
    for (char c: a){
        q+=c;
    }
    q-=(a.length()*ASCII_NUM);
    for (int i=0; i<a.length(); i++){
        a[i]=moveForward(a[i], q);
    }
    return a;
}

char moveForward(char c, int b){
    int a = int(c);
    a+=(b-ASCII_NUM);
    a%=ALPHABET_COUNT;
    a+=ASCII_NUM;
    return char(a);
}

char addCharacters(char a, char b){
    a+=(b-(ASCII_NUM*2));
    a%=ALPHABET_COUNT;
    a+=ASCII_NUM;
    return a;
}
