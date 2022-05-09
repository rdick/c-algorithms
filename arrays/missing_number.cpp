int missingNumber(int arr[], int n) 
    { 
        int ans[n+1] = {0};
        for(int i = 0; i<n; i++){
            if(arr[i] > 0 && arr[i]<n+1){
                int index = arr[i]-1;
                ans[index] = 1;
            }
        }
        for(int i = 0; i<n+1;i++){
            if(ans[i]==0){
                return i+1;
            }
        }
    } 