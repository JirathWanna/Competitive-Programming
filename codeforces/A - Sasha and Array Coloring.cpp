#include <bits/stdc++.h>
using namespace std;


int main() {
    int t, n, ans = 0;
    cin >> t;
    for(int j = 0; j < t; j++) {
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr+n);

        for(int i = 0; i < n/2; i++) {
            ans += abs(arr[n-1-i] - arr[i]);
        }

        cout << ans << "\n";
        ans = 0;
    }
    
}

