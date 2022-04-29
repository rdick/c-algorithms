#include<iostream>
using namespace std;
#include <string> 

int largestElement (int arr[], int n) {
    int max1 = 0;

    for(int i = 0; i < n; i++) {
        max1 = max(max1, arr[i]);
    }
    cout << max1 << endl;
    return max1;
}

int main() {
    int dog[] = {5,8,20,10};
    int val = largestElement(dog, 4);
    cout << val << endl;
}

