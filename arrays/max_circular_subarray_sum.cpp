int circularSubarraySum(int arr[], int num){
        
        if(num == 1){
            return arr[0];
        }
        
        int total = 0;
        bool all_negative = true;
        

       for(int i=0; i<num; i++){
          total += arr[i]; 
            if(arr[i] > 0){
              all_negative = false;
          }
       }
       
       int prev_max = arr[0];
       int prev_min = arr[0];
       
        int max1 = arr[0];
        int min1 = arr[0];
        
       
        for(int i=1; i<num; i++){
        // 1. Max Subarray Traidtional Way
          if(prev_max + arr[i] > arr[i]){
              prev_max = prev_max + arr[i];
          } else {
              prev_max = arr[i];
          }
          max1 = max(prev_max,max1);
         
        //  2. Max Subarray => Total - Min subArray
          if(prev_min + arr[i] < arr[i]){
              prev_min = prev_min + arr[i];
          } else {
              prev_min = arr[i];
          }
          min1 = min(prev_min,min1);
       }

       if(all_negative){
        // 3. All Negative => Max Subarray will the one max item
           return max1;
       } else {
           return max(max1,total-min1);
       }
       
    }