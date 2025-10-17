#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;

    int time_left = 240 - k;
    int problem_time = 5;
    int ans = 0;
    int i = 1;

    while (time_left >= problem_time) {
        time_left -= problem_time;
        i++;
        ans++;
        problem_time = (5*i);
    }

    if(ans > n) {
        cout << n;
    } else {
        cout << ans;
    }
    

}