#include <bits/stdc++.h>
using namespace std;

int main(){

    int d; cin >> d;
    int res = d - 3;
    int resto = res%8;

    if(resto == 3){
        cout << "1" << endl;
    }
    if(resto == 4){
        cout << "2" << endl;
    }
    if(resto == 5){
        cout << "3" << endl;
    }

    return 0;
}