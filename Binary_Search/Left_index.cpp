int leftIndex(int N, int arr[], int X){
    
    int low = 0;
    int high = N-1;
    
    while(low <= high){
        int mid = (high+low)/2;
        
        if(arr[mid] > X){
            high = mid-1;
        } else if(arr[mid] < X){
            low = mid+1;
        } else { // arr[mid] == X 
            if(mid -1 < 0 || arr[mid-1] != X){
                return mid;
            } else {
                high = mid -1;
            }
        }
    }
    return -1;
    
}