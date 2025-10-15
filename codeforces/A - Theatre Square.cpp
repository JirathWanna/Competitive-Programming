#include <bits/stdc++.h>
using namespace std;


int main() {
    long double n,m,a;
    cin >> n >> m >> a;

    long long x_point, y_point;
    x_point = ceil(m/a); //amount of x axis midpoint
    y_point = ceil(n/a); //amount of y axis midpoint

    cout << x_point * y_point;
}

