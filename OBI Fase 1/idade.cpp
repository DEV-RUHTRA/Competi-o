#include <bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2,n3; cin >> n1 >> n2 >> n3;
    vector<int> lista;
    
    lista.push_back(n1);
    lista.push_back(n2);
    lista.push_back(n3);

    sort(lista.begin(), lista.end());

    cout << lista[1] << endl;
    
    return 0;
}