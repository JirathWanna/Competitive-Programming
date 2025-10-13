#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    //Say "NO" if there's a gap wider than 1 in sorted array.
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int arr[n];
        bool done = false;

        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        } 

        sort(arr, arr+n);

        for(int i = 0; i < n - 1; i++) {
            if (abs(arr[i] - arr[i+1]) > 1) {
                cout << "NO" << endl;
                done = true;
                break;
            }
        }

        if(!done) {
            cout << "YES" << endl;
        }
        


    }


}

