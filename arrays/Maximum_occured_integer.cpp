int maxOccured(int L[], int R[], int n, int maxx){
    
        int arr[maxx+1] = { 0 }; // Array of N elements from 0 => Max
        
         for(int l = 0; l < n; l++){
             int left_index = L[l];
             arr[left_index]++;     // ADD 1 at the beginning of Range
         }
         
        for(int r = 0; r < n; r++){
            int right_index = R[r]+1; // MINUS 1 => -1 after the range
            arr[right_index]--;
         }
         
         
         int total = 0;
         int max_total = 0;
         int max_total_index = -1;
         
         for(int i = 0; i < maxx+1; i++){
             total += arr[i];
             if(total > max_total){
                max_total = total;
                max_total_index = i;
             }
         }
         
         return max_total_index;
        
    }