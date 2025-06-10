#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> amigos;
    int n, altmin, num; cin >> n >> altmin;

    for(int i = 0; i < n; i++){
        cin >> num;
        if(num < altmin){
            cout << "NAO PODE ENTRAR" << endl;
            return 0;
        }
        amigos.push_back(num);
    }
    cout << "PODE ENTRAR" << endl;

    return 0;
}