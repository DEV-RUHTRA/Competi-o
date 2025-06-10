#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string palavra;
    cin >> palavra;
    vector<char> novapa;
    int cont = 0;

    for (int i = 0; i < (int)palavra.size(); i++){
        cont = cont - n;
        while (cont < n){
            novapa.push_back(palavra[i]);
            cont++;
        }
    }

    for (int i2 = 0; i2 < (int)novapa.size(); i2++){
        cout << novapa[i2];
    }

    return 0;
}