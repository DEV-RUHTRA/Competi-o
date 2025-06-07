#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, num; cin >> n;
    int soma = 0;
    for(int i = 0; i < n; i++){
        cin >> num;
        soma += num;
    }
    
    cout<< soma << endl;
    
    return 0;
}