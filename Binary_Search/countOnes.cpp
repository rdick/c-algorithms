int countOnes(int arr[], int N)
{
    int low = 0;
    int high = N-1;
    int ans = -1;
    while(low <= high){
        int mid = (high+low)/2;
        
        if(arr[mid] == 0){
            high = mid-1;
        } else {
            if(mid+1 == N || arr[mid +1] == 0){
                return mid+1;
            } else {
                low++;
            }
        }
    }
}