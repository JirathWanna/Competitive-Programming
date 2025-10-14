#include <iostream> 
using namespace std;


int main() {
    int lucky_num[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int num;
    cin >> num;

    for(int i = 0; i < 14; i++) {
        if(lucky_num[i] > num) {
            cout << "NO";
            return 0;
        }
        if(num % lucky_num[i] == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

