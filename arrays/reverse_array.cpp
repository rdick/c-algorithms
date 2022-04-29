#include<iostream>
using namespace std;
#include <string> 

int reverseArry (int arr[], int n) {
    for(int i = 0; i < n/2-1; i++) {
        int place = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = place;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 1;
}

int main() {
    int dog[] = {1,2,3,4,5};
    int val = reverseArry(dog, 5);
    // cout << val << endl;
}

