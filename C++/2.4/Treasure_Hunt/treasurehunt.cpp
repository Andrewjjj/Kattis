#include <iostream>
#include <vector>

using namespace std;

int main(){

    int r,c;
    cin >> r >> c;
    vector<vector<char>> a;
    a.resize(r, vector<char>(c, 0));
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> a.at(i).at(j);
        }
    }
    int x{0},y{0};
    for (int i=0; i<r*c; i++){
        switch (a.at(y).at(x)){
            case 'W':
                if(x==0){
                    cout << "Out" << endl;
                    return 0;
                }
                else x--;
                break;
            case 'E':
                if(x==c-1){
                    cout << "Out" << endl;
                    return 0;
                }
                else x++;
                break;
            case 'N':
                if(y==0){
                    cout << "Out" << endl;
                    return 0;
                }
                else y--;
                break;
            case 'S':
                if(y==r-1){
                    cout << "Out" << endl;
                    return 0;
                }
                else y++;
                break;
            default:
                cout << i << endl;
                return 0;
                break;
        }
    }
    cout << "Lost" << endl;
    return 0;
}
