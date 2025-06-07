#include <bits/stdc++.h>
using namespace std;


int tabuleiro[50];

int main(){

    int n; cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> tabuleiro[i];
    }
    for(int i2 = 1; i2 <= n; i2++){
        cout << tabuleiro[i2 - 1] + tabuleiro[i2] + tabuleiro[i2 + 1] << endl;  
    }

}