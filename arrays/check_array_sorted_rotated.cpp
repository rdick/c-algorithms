bool checkRotatedAndSorted(int arr[], int num){;
        int min_index = 0;
        int max_index = 0;
        int ascending = true;
        for(int i = 1; i < num; i++){
            if(arr[min_index] > arr[i]){
                min_index = i;
            }
            if(arr[max_index] < arr[i]){
                max_index = i;
            }
            
        }
        
        if(min_index == 0 && abs(min_index - max_index) != 1){
            return false;
        }

        int left;
        int right;
        if(max_index > min_index){
        // 30 20 10 50 35
            left = min_index;
            right = max_index;
            for(int i = left-1; i>=0; i--){
                if(arr[i] < arr[i+1]){
                    return false;
                }
                
            }
            for(int i = right+1; i < num; i++){
                if(arr[i-1] < arr[i]){
                    return false;
                }
            }
        
            if(arr[0] < arr[num-1]){
                return true;
            }
            return false;
            
        
        } else {
        // 3 4 1 2
            right = min_index;
            left = max_index;
            for(int i = left-1; i>=0; i--){
                if(arr[i] > arr[i+1]){
                    return false;
                }
                
            }
            for(int i = right+1; i < num; i++){
                if(arr[i-1] > arr[i]){
                    return false;
                }
            }
        
            if(arr[0] > arr[num-1]){
                return true;
            }
            return false;
        }
    }