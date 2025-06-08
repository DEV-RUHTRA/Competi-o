#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m,ident,identsaiu;
    vector<int> filainicial;
    vector<int> saiu;

    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> ident;
        filainicial.push_back(ident);
    }
    cin >> m;
    for(int i2 = 0;i2<m;i2++){
        cin >> identsaiu;
        saiu.push_back(identsaiu);
    }
    for(int i3 = 0; i3 < m; i3++){
        filainicial.erase(remove(filainicial.begin(),filainicial.end(),saiu[i3]), filainicial.end());
    }

    for(int i4 = 0; i4 < (int)filainicial.size(); i4++){
        cout << filainicial[i4] << " ";
    }

    return 0;
}