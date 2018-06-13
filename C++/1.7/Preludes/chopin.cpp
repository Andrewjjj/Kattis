#include <iostream>
#include <vector>
using namespace std;

vector <string> notesSharp = {"A#", "C#", "D#", "F#", "G#"};
vector <string> notesFlat = {"Bb", "Db", "Eb", "Gb", "Ab"};

int caseNumber {1};

bool check (string a, string b){
    for (int i=0; i<5; i++){
        if (a == notesSharp[i]){
            cout << "Case " << caseNumber << ": " << notesFlat[i] << " " << b << endl;
            return false;
        }
        else if (a == notesFlat[i]){
            cout << "Case " << caseNumber << ": " << notesSharp[i] << " " << b << endl;
            return false;
        }
    }
    return true;
}

int main(){
    string a,b,c;
    while (cin >> a >> b){
        if (check(a,b)){
            cout << "Case " << caseNumber << ": " << "UNIQUE" << endl;
        }
        caseNumber++;
    }
    return 0;
}
