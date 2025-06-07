#include <bits/stdc++.h>
using namespace std;

int main(){

    int n1, n2,maior,menor; cin >> n1 >> n2;

    if(n1 <= n2){
        maior = n2;
        menor = n1;
    }else{
        maior = n1;
        menor = n2;
    }
    while(n1 <= n2){
        cout << n1 << " ";
        n1++;
    }

    return 0;
}