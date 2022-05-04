class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();   
        if(size == 1){
            return;
        }
        if(size == 2){
            if(nums[0] < nums[1]){
                swap(nums[0],nums[1]);
            }
            return;
        }
        int prev = nums[size-1];
        int right = size-1;
        int left = size-2;
        
        while(left >= 0){
            // If Previous Number is Greater than Left Pointer         
            if(nums[left] < prev){
                // Look For Swap - Check Right Pointer
                if(nums[left] < nums[right]){
                    swap(nums[left], nums[right]);
                    if(left < (size-2)){
                        // Reverse Elements   
                        left++; 
                        right = size - 1;                      
                        while(left < right){
                            swap(nums[left], nums[right]);
                            left++;
                            right--;
                        }
                    }
                    return;
                } else {
                    right--;
                    continue;
                }
            }
            //  If Left Number is Greater Than Previous            
            prev = nums[left];
            left--;
        }
        
        // If nothing works reverse the array
        for(int i=0; i < size/2; i++){
            swap(nums[i],nums[size-i-1]);
        }
    }
};