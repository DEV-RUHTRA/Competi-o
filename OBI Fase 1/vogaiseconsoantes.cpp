#include <bits/stdc++.h>
using namespace std;

int main(){

    string S; cin >> S;
    string vogais;
    string consoantes;

    for(int i = 0; i < (int)S.size(); i++){
        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'){
            vogais.push_back(S[i]);
        }else{
            consoantes.push_back(S[i]);
        }
    }
    int qtdvogais;

    qtdvogais = count(S.begin(),S.end(),'a') + count(S.begin(),S.end(),'e')+ count(S.begin(),S.end(),'i') + count(S.begin(),S.end(),'o') + count(S.begin(),S.end(),'u');

    cout << "Vogais: " << vogais << endl;
    cout << "Consoantes: " << consoantes << endl;
    cout << qtdvogais << endl;

    



    return 0;
}