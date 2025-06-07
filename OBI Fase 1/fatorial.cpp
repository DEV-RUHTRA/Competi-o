#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int fatorial = 1;

    for(int i = 1; i<=n ;i++){
        fatorial = fatorial * i;
    }

cout << fatorial << endl;

    return 0;
}