long long trappingWater(int arr[], int n){
        vector<int> left_array;
        int left_array_max = INT_MIN;
        for(int i = 0; i< n; i++){
            left_array_max = max(left_array_max, arr[i]);
            left_array.push_back(left_array_max);
        }
        
        vector<int> right_array;
        int right_array_max = INT_MIN;
        for(int i = n-1; i >= 0 ; i--){
            right_array_max = max(right_array_max, arr[i]);
            right_array.push_back(right_array_max);
        }
        reverse(right_array.begin(),right_array.end());
        

        long long total = 0;
        for(int i = 0; i< n; i++){
            total += min(left_array[i], right_array[i]) - arr[i];
        }

        return total;
    }