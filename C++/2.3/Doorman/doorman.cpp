#include <iostream>
#include <string>

using namespace std;

void swap (char *a, char *b){
    char temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

int main(){

    int a,m{0}, w{0};
    string b;
    cin >> a >> b;
    for (int i=0; i<b.length(); i++){
        if (b.at(i) == 'M'){
            if(m<w+a) m++;
            else{
                if(i<b.length()-1){
                    if(b.at(i+1) == 'W') {
                        w++;
                        swap(&b.at(i), &b.at(i+1));
                    }
                    else{
                        break;
                    }
                }
            }
        }
        else if( b.at(i) == 'W'){
            if(w<m+a) w++;
            else{
                if(i<b.length()-1){
                    if(b.at(i+1) == 'M'){
                        m++;
                        swap(&b.at(i), &b.at(i+1)) ;
                    }
                    else{
                        break;
                    }
                }
            }
        }
    }
    cout << m+w << endl;

    return 0;
}
