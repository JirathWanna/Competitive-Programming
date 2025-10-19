#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    string input;
    cin >> input;
    bool isCapLock = true;


    for (int i = 1; i < input.length(); i++) {
        if(islower(input[i])) {
            isCapLock = false;
            cout << input;
            return 0;
        }
    }

    for (int i = 0; i < input.length(); i++) {
        if(islower(input[i])) {
            input[i] = toupper(input[i]);
        } else {
            input[i] = tolower(input[i]);
        }
    }
    
    cout << input;

    
    
}