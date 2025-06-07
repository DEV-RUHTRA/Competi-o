#include <bits/stdc++.h>
using namespace std;

int main(){

    int V, A , F , P; cin >> V >> A >> F >> P;
    int contador = 0;
    int res = 0;

        if(V > A){
            res = V-A;
            contador += 1;
        }
        if(res > F){
            res = V-F;
            contador += 1;
        }
        if(res > P){
            res = V-P;
            contador += 1;
        }

    cout << contador << endl;


    return 0;
}