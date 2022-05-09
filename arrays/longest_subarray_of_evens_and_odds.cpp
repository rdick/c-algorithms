int maxEvenOdd(int arr[], int n) 
    { 
        int count = 1;
        int max1 = 1;
        for(int i = 1; i < n; i++){
            int first = arr[i-1]%2;
            int sec = arr[i]%2;
            
            // cout << first;
            // cout << " ";
            // cout << sec;
            // cout << " ";
            
            if((first == 1 && sec == 0) || (first == 0 && sec == 1)){
                // cout << "made it";
                count++;
            } else {
                max1 = max(count, max1);
                count = 1;
            }
            // cout << count <<endl;
        }
        return max(count, max1);
    } 