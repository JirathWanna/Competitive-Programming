#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    unordered_map <string,int> map;
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        if(map[input] > 0) { //the name already exists
            string newname = input + to_string(map[input]);
            cout << newname << "\n";
            map[input] ++;
        } else {
            cout << "OK" << "\n";
            map[input] = 1;
        }
    }
    
}