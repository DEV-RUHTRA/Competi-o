#include <bits/stdc++.h>
using namespace std;

bool eh_primo(int x){

    if(x < 10){
        if(x == 1 || x == 3 || x == 5 || x == 7 || x == 9){
            return true;
        }
    }

	if(x%2 == 0 || x%3 == 0 || x%4 == 0 || x%5 == 0 || x%6 == 0 || x%7 == 0 || x%8 == 0 || x%9 == 0){
        return false;
    }else{
        return true;
    }
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
