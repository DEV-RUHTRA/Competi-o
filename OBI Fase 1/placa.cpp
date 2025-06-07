#include <bits/stdc++.h>
using namespace std;

int main() {
    string placa; cin >> placa;

    if(placa.size() != 7 && placa.size() != 8) {
        cout << 0 << endl;

        return 0;
    }

    if(placa.size() == 8) {
        if(placa[0] >= 'A' && placa[0] <= 'Z' && 
           placa[1] >= 'A' && placa[1] <= 'Z' && 
           placa[2] >= 'A' && placa[2] <= 'Z' &&
           placa[3] == '-' && 
           placa[4] >= '0' && placa[4] <= '9' && 
           placa[5] >= '0' && placa[5] <= '9' && 
           placa[6] >= '0' && placa[6] <= '9' && 
           placa[7] >= '0' && placa[7] <= '9') {
            cout << 1 << endl;

            return 0;
        }
    }

    if(placa.size() == 7) {
        if(placa[0] >= 'A' && placa[0] <= 'Z' && 
           placa[1] >= 'A' && placa[1] <= 'Z' && 
           placa[2] >= 'A' && placa[2] <= 'Z' &&
           placa[3] >= '0' && placa[3] <= '9' && 
           placa[4] >= 'A' && placa[4] <= 'Z' && 
           placa[5] >= '0' && placa[5] <= '9' &&
           placa[6] >= '0' && placa[6] <= '9') {
            cout << 2 << endl;

            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}