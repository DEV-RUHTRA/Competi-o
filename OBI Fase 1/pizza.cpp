#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, pizza,res; cin >> a >> pizza;
    a++;
    pizza = pizza * 8;
    res = pizza/a;
    cout << res << " ";
    res = pizza%a;
    cout << res << endl;
    

    return 0;
}