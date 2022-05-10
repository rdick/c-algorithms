int searchInSorted(int arr[], int N, int K) 
{ 
    
    int low = 0;
    int high = N-1;
    
    while(low<=high){
        int mid = (high+low)/2;
        
        if(arr[mid] == K){
            return 1;
        } else if(arr[mid] > K){
            high = mid-1;
        } else {
            low = mid +1;
        }
    }
    return -1;
       
}