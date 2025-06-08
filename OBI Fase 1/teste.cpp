#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> numeros;
    int n; cin >> n;
    int num,qtd,soma,max,min;



    for(int i = 0; i < n; i++){
        cin >> num;
        numeros.push_back(num);
    }
    
    sort(numeros.begin(), numeros.end());
    for(int i2 = 0; i2 < n; i2++){
        cout << numeros[i2];
    }
    reverse(numeros.begin(),numeros.end());
    for(int i3 = 0; i3 < n; i3++){
        cout << numeros[i3];
    }

    qtd = count(numeros.begin(), numeros.end(), '1');
    soma = accumulate(numeros.begin(), numeros.end(), 0);
    max = *max_element(numeros.begin(), numeros.end());
    min = *min_element(numeros.begin(), numeros.end());
    
    cout << qtd << endl;
    cout << soma << endl;
    cout << max << endl;
    cout << min << endl;


    return 0;
}