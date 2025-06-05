#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b; cin >> a >> b;
    vector<int> lista1;
    vector<int> lista2;

    for(int i = 0; i<a;i++){
        cin >> a;
        lista1.push_back(a);
    }
    for(int i2 = 0; i2<b; i2++){
        cin >> b;
        lista2.push_back(b);
    }
    sort(lista1.begin(), lista1.end());


    


    return 0;
}