#include <bits/stdc++.h>
using namespace std;

void pesoUrano(float p){
    float novopeso;
    novopeso = p * 1.17;
    if(novopeso < 35){
        cout << "Grupo 1" << endl;
    }else{
        if(novopeso >= 50 && novopeso <= 75){
            cout << "Grupo 2" << endl;
        }else{
            cout << "O animal não pertence a nenhum grupo de interesse" << endl;
        }
    }
}
int main(){

    int n; cin >> n;
    float peso;
    
    for(int i =0; i < n;i++){
        cin >> peso;
        pesoUrano(peso);
    }

    return 0;
}