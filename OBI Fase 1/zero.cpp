#include <bits/stdc++.h>
using namespace std;

vector<int> numeros;

int main(){
    int n, num, soma;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> num;
        if(num == 0){
            numeros.pop_back();
        }else{
            numeros.push_back(num);
        }   
    }
    soma = accumulate(numeros.begin(), numeros.end(), 0);
    cout << soma << endl;

    return 0;
}