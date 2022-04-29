#include<iostream>
using namespace std;
#include <string> 

int left_rotate (int arr[], int n, int rotate) {
    int rotate_total = rotate % n;
    int temp = arr[0];

    for(int i = 0; i < n; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    cout << "end it" << endl;

}

int main() {
    int array[] = {1,2,3,4,5};
    int rotate = 3;
    int val = left_rotate(array, 5, rotate);
}

