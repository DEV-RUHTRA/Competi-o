#include <bits/stdc++.h>
using namespace std;

int main(){

    int N,L,C; cin >> N;
    int res = 0;

    for(int i = 0; i < N; i++){
        cin >> L >> C;
        if(L > C){
            res += C;
        }
    }
cout << res << endl;

    return 0;
}