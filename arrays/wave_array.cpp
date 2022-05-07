    void convertToWave(int n, vector<int>& arr){
        
        for(int i = 1; i < arr.size(); i+=2){
            swap(arr[i], arr[i-1]);
        }
        
    }