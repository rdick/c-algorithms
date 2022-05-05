//Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // if(k >= n-1){
        //     reverse(arr.begin(), arr.end());
        //     return;
        // }
        int reverse_times = n/k;
        int count = 0;
        int i = 0;
        int j = k;
        while(count < reverse_times){
            reverse(arr.begin()+i, arr.begin()+j);
            i +=k;
            j +=k;
            count++;
        }
        
        reverse(arr.begin()+k*reverse_times, arr.end());
    }