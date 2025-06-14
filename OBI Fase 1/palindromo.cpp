#include <bits/stdc++.h>
using namespace std;

int main(){
    string palavra, outra;
    cin >> palavra;
    outra = palavra;
    reverse(outra.begin(), outra.end());

    if(palavra == outra){
        cout << "SIM" << endl;
    }else{
        cout << "NAO" << endl;
    }

    return 0;
}