#include<iostream>
using namespace std;
#include <string> 

int largestElement (int arr[], int n) {
    int left = 0 ;
    int right = 1;

    int curr = arr[0];
    int max1 = arr[0];

    for(int i = 0; i < n; i++) {
        int next = curr + arr[i];
        if(arr[i] < next){
            curr = next;
        } else {
            curr = arr[i];
        }

        if(curr > max1) {
            max1 = curr;
        }
    }
    cout << max1 << endl;
    // for(int i = 0; i < n; i++) {
    //     cout << arr[i] << endl;
    // }
}

int main() {
    int dog[] = {2,3,-8,5,-1,2,3};
    int val = largestElement(dog, 7);
}

