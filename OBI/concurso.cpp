#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K, A; cin >> N >> K;
    vector<int> lista; 

    for(int i = 0; i < N; i++) {
        cin >> A;
        lista.push_back(A);
    }

    sort(lista.begin(), lista.end());

    cout << lista[N - K] << endl;

    return 0;
}

