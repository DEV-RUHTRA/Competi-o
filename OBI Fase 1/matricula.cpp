#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,num, matricula; cin >> n;
    vector<int> lista;

    for(int i = 0; i < n; i++){
        cin >> num;
        lista.push_back(num);
    }

    cin >> matricula;

    if(find(lista.begin(),lista.end(), matricula) != lista.end()){
        cout <<"SIM" << endl;
    }else{
        cout << "NAo" << endl;
    }

    return 0;
}