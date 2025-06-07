#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,num; cin >> n;
    vector<int> lista;
    lista.push_back(0);

    for(int i = 0; i < n; i++){
        cin >> num;
        lista.push_back(num);
    }
    
    sort(lista.begin(),lista.end());

    if(n%2 == 0){
        int media = (lista[n/2] + lista[(n/2) + 1]) / 2;
        cout << media << endl;
    }else{
        int media = lista[(n/2) + 1];
        cout << media << endl;
    }

    return 0;
}