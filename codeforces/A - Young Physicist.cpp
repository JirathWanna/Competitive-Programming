#include <iostream> 
using namespace std;


int main() {
    int n;
    cin >> n;
    int x_sum = 0, y_sum = 0, z_sum = 0;
    for(int i = 0; i < n; i++) {
        int input[3];
        for(int j = 0; j< 3; j++) {
            cin >> input[j];
        }
        x_sum += input[0];
        y_sum += input[1];
        z_sum += input[2];
    }

    if(x_sum == 0 && y_sum == 0 && z_sum == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

