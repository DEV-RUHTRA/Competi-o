#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,codigo; cin >> n;
    vector<int> lista;

    for(int i = 0; i < n; i++){
        cin >> codigo;
        lista.push_back(codigo);
    }

    int posicao = 0;
    int cont = 0;

    while(posicao < n){
        if(lista[posicao] == 1 && lista[posicao + 1] == 0 && lista[posicao + 2] == 0){
        cont++;
        posicao++;
        }else{
            posicao++;
        }
    }

cout << cont << endl;

    return 0;
}