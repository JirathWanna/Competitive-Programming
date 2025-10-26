#include <bits/stdc++.h>
using namespace std;


int main() {
    long long t, n, num = 0, input;
    cin >> t;
    for (int i = 0; i < t; i++) {
        num = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> input;
            num += input;
        }

        long long square = sqrt(num);
        if (square * square != num) {
            cout << "NO";
        } else {
            cout << "YES";
        }
        cout << "\n";
        
    }
    
    
}