#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string input;
        cin >> input;

        int num = stoi(input); 

        int test = sqrt(num);

        if(test * test != num) {
            cout << -1;
        } else {
            cout << 0 << " " << test;
        }
        cout << "\n";
    }
    

    


}