#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,num; cin >> n;
    vector<int> lista;
    vector<int> quantidade;

    for(int i = 0; i < n; i++){
        cin >> num;
        lista.push_back(num);
    }

    for(int i2 = 0; i2 < n ; i2++){
       quantidade.push_back(count(lista.begin(), lista.end(), lista[i2]));
    }

    sort(quantidade.begin(), quantidade.end());
    int ultimo = quantidade.size();
    quantidade[ultimo - 1];


    return 0;
}