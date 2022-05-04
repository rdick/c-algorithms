#include<iostream>
using namespace std;
#include <string> 

int largestElement (int arr[], int n) {
    int left = 0 ;
    int right = 1;
    while(second < n) {
        int first_num = arr[first];
        int second_num = arr[second];
        if(first_num == 0) {
            if(second_num == 0){
                second ++;
            } else {
                int temp = arr[first];
                arr[first] = arr[second];
                arr[second] = temp;
                first++;
                second++;
            }
        } else {
            first++;
            second++;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int dog[] = {1,0,2,0,3,0};
    int val = largestElement(dog, 6);
}

