#include <bits/stdc++.h>
using namespace std;


int main() {
    long long n;
    cin >> n;

    double m = n;

    long long ans;

    if(n % 2 == 0) {
        ans = ceil(m/2);
    } else {
        ans = ceil(m/2)*(-1);
    }
    cout << ans;
    
}