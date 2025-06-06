#include <bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2; cin >> n1 >> n2;

    if(n1 == n2){
        cout << "0" << endl;
        return 0;
    }

    if(n1 <= n2){
        while(n1 <= n2){
            cout << n1 << " ";
            n1++;
            if(n1 == n2){
                cout << n2 << " ";
            return 0;
            }
        }
    }

    if(n1 >= n2){
        while(n1 >= n2){
            cout << n2 << " ";
            n2++;
        }
    }
    
    return 0;
}