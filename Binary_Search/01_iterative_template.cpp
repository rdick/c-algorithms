#include<iostream>
using namespace std;
#include <string>

int largestElement (int arr[], int n, int x) {
    int low = 0 ;
    int high = n-1;
    while(low <= high) {
        int mid = (low+high)/2;
        if(arr[mid] == x){
            return mid;
        } else if (arr[mid] > x){
            low = mid;
        } else {
            high = mid;
        }
    }
    return -1;
}

int main() {
    int dog[] = {10,20,30,40,50};
    int val = largestElement(dog, 6,45);
}

