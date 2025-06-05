#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin >> n;
    int botao;
    int a = 0; int b = 0;
    
    for(int i = 0; i < n; i++){
        cin >> botao;
        if(botao == 1){
            if(a == 1){
                a = 0;
            }else{
                a = 1;
            }
        }
        if(botao == 2){
            if(a == 1){
                a = 0;
            }else{
                a = 1;
            }
            if(b == 1){
                b = 0;
            }else{
                b = 1;
            }
        }
    }
    cout << a << endl;
    cout << b << endl;
    return 0;
}