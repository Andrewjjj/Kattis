#include <iostream>

using namespace std;

void print(int a){
    if (a==3){
        cout << "Tie." << endl;
        return;
    }
    else if (a==0){
        return;
    }
    cout << "Player " << a << " wins." << endl;
}

int checkMia(int &a, int &b, int &c, int &d){
    if(a == 2 && b == 1 && c == 2 && d == 1) return 3;
    else if (a ==2 && b == 1) return 1;
    else if (c == 2 && d == 1) return 2;
    else return 0;
}

int checkDouble( int &a, int &b, int &c, int &d){
    if (a == b && c == d){
        if (a>c){
            return 1;
        }
        else if (c>a){
            return 2;
        }
        else{
            return 3;
        }
    }
    else if (a==b) return 1;
    else if (c==d) return 2;
    else return 0;
}

int compare(int &a, int &b, int &c, int &d){
    if (a>c) return 1;
    else if(c>a) return 2;
    else{
        if(b>d) return 1;
        else if(d>b) return 2;
        else return 3;
    }
}

void swapp(int *a, int *b){
    if (*a<*b){
        int c;
        c=*a;
        *a=*b;
        *b=c;
    }
}

int main(){
    int a,b,c,d;
    while(cin >> a >> b >> c >> d && a!=0 &&b!=0 && c !=0 && b!=0){
        swapp (&a, &b);
        swapp (&c, &d);

        if(checkMia(a,b,c,d)) {
            print(checkMia(a,b,c,d));
            continue;
        }

        if (checkDouble(a,b,c,d)){
            print(checkDouble(a,b,c,d));
            continue;
        }

        print(compare(a,b,c,d));
    }
    return 0;
}
