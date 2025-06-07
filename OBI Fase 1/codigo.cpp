#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, cod; cin >> N;
    int res = 0;
  
    for(int i = 0; i < N; i++){
        cin >> cod;
        if(cod == 1){
            res++;
        }
    }
cout << res << endl;

    return 0;
}