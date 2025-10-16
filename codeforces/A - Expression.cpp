#include <bits/stdc++.h>
using namespace std;


int main() {
    //There're 6 ways to operate these 3 variables
    int a, b, c;
    cin >> a >> b >> c;
    int sol[6];

    sol[0] = a*b+c;
    sol[1] = a+b+c;
    sol[2] = a*(b+c);
    sol[3] = a+b*c;
    sol[4] = (a+b)*c;
    sol[5] = a*b*c;

    sort(sol, sol + 6);
    cout << sol[5];
    
}