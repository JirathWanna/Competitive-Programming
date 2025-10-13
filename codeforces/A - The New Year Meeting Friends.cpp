#include <iostream> 
using namespace std;


int main() {
    int arr[3];

    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    //bubble sort
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2 - i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << (arr[2] - arr[1]) + (arr[1] - arr[0]);

    

}

