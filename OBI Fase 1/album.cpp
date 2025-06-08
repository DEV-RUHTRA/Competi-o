#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 10;
    int num;
    vector<int> numeros;
    vector<int> pares;
    vector<int> impar;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        numeros.push_back(num);
    }

    for (int i2 = 0; i2 < n; i2++)
    {
        if (numeros[i2] % 2 == 0)
        {
            pares.push_back(numeros[i2]);
        }
        else
        {
            impar.push_back(numeros[i2]);
        }
    }
    for (int i3 = 0; i3 < (int)pares.size(); i3++)
    {
        cout << pares[i3] << " ";
    }
    cout << endl;
    for (int i4 = 0; i4 < (int)impar.size(); i4++)
    {
        cout << impar[i4] << " ";
    }

    return 0;
}