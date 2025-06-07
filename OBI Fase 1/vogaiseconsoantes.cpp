#include <bits/stdc++.h>
using namespace std;

int main(){

    string S; cin >> S;
    string vogais;
    string consoantes;

    for(int i = 0; i < (int)S.size(); i++){
        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'){
            vogais[i] = S[i];
        }else{
            consoantes[i] = S[i];
        }
    }

    cout << "Vogais: " << vogais << endl;
    cout << "Consoantes: " << consoantes << endl;

    return 0;
}