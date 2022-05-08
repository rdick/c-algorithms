int equilibriumPoint(long long a[], int n) {
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return -1;
        }
        int sum = 0;
        for(int i = 1; i < n; i++){
            sum += a[i];
        }
        
        int new_sum = 0;
        for(int i = 1; i < n; i++){
            new_sum += a[i-1];
            sum -= a[i];
            if(new_sum == sum){
                return i+1;
            }
            
        }
        
        return -1;
        // Your code here
    }
