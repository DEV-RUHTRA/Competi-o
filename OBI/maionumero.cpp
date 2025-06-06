#include <bits/stdc++.h>
using namespace std;

int main(){

    int num; cin >> num;
    vector<int> lista;
    int cont = 0;

    if(num == 0){
        return 0;
    }
    while(num != 0){
        lista.push_back(num);
        cont++;
        cin >> num;
    }
    
    sort(lista.begin(),lista.end());

    cout << lista[cont - 1] << endl;

    return 0;
}