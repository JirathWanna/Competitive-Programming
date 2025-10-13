#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,input;
    cin >> n;

    vector <int> coin;
    int total_coin = 0;
    vector <int> mycoin;
    int total_mycoin = 0;

    for(int i = 0; i < n; i++) {
        cin >> input;
        coin.push_back(input);
        total_coin += input;
    }

    sort(coin.begin(), coin.end());

    while(total_mycoin <= total_coin) {
        total_coin -= coin.back();
        total_mycoin += coin.back();
        mycoin.push_back(coin.back());
        coin.pop_back();
    }

    
    cout << mycoin.size();
    
}

