int findFloor(long long int arr[], int N, long long int K) {
    long long int low = 0;
    int high = N-1;
    int ans = -1;
    
    while(low <= high){
        int mid = (low + high)/2;
        
        if(arr[mid] > K){
            high = mid -1;
        } else if (arr[mid] == K) {
            return mid;
        } else {
            low = mid + 1;
            ans = mid;
        }
    }
    
    return ans;
}