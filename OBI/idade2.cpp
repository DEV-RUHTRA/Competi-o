#include <bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2,n3; cin >> n1 >> n2 >> n3;
    int medio;
    medio = n1;

    if((medio >= n2 && medio <= n3) || (medio >= n3 && medio <= n2)){
        cout << medio << endl;
        return 0;
    }else{
        medio = n2;
    }    
    if((medio >= n1 && medio <= n3) || (medio >= n3 && medio <= n1)){
        cout << medio << endl;
    }else{
        cout << n3 << endl;
    }

    
    return 0;
}