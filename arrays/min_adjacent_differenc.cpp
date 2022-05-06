    int minAdjDiff(int arr[], int n){    
        int min1 = abs(arr[0]-arr[n-1]);
        
        for(int i=1;i<n;i++){
            int new1 = abs(arr[i]-arr[i-1]);
            min1 = min(min1, new1);
        }
        
        return min1;
    }