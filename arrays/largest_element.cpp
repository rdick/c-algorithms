#include<iostream>
using namespace std;
#include <string> 

int largestElement (int arr[], int n) {
    int max1 = -1;
    int max2 = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] != max1){
            max2 = arr[i];
        }
    }
    cout << max1 << " " << max2 << endl;
}

int main() {
    int dog[] = {20,20,20,20,20};
    int val = largestElement(dog, 4);
    cout << val << endl;
}

