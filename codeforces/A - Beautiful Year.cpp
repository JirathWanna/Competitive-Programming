#include <iostream> 
using namespace std;

bool has_duplicate(int *arr) {
    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 4; j++) {
            if (arr[i] == arr[j]) {
                return true;
            } 
        }
    }
    return false;
}

int main() {
    int arr[4];
    int input; 
    int i = 0;
    cin >> input;
    input ++;


    do {
        int temp = input;
        i = 0;
        while(temp > 0) {
            arr[i] = temp % 10;
            temp /= 10;
            i++;
        }
        input ++;
    } while(has_duplicate(arr));

    cout << input - 1;

}

