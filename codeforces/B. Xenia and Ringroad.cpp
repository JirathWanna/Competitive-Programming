#include <bits/stdc++.h>
using namespace std;


int main() {
    long long n ,m, current_pos = 1, time = 0;
    cin >> n >> m;
    int input;

    for (int i = 0; i < m; i++) {
        cin >> input;

        if(input > current_pos) {
            time += (input - current_pos);
        } else if(input < current_pos) {
            time += (n - (current_pos - input));
        } 
        current_pos = input;
    }

    cout << time;
}