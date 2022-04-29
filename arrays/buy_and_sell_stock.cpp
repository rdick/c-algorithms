#include<iostream>
using namespace std;
#include <string> 

int buy_and_sell (int arr[], int n) {
    int total = 0;
    int left = 0;
    int right = 1;

    while(right < n) {
        if(arr[right] > arr[left]) {
            total = total + arr[right] - arr[left];
            cout << total;
            cout << " ";
            cout << arr[left];
            cout << " ";
            cout << arr[right] << endl;
            left = right;  
        }
        if(arr[right] < arr[left]){
            left = right;
        }
        right++;
    }
    // for(int i = 0; i < n; i++) {
    //     cout << arr[i] << endl;
    // }
    cout << "total: ";
    cout << total << endl;
    return total;

}

int main() {
    int array[] = {1,5,3,8,12};
    int rotate = 3;
    int val = buy_and_sell(array, 5);
}

