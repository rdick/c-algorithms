    int minNumber(int arr[], int low, int high)
    {
        while(low <= high){
            int mid = (high+low)/2;
        
            if(arr[mid] > arr[high]){
                low = mid +1;     
            } else {
                if(mid -1 < 0 || arr[mid-1] > arr[mid]) {
                    return arr[mid];
                } else {
                    high = mid -1;
                }
            }
        }
        
    }