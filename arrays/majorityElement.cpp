    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        for(int i = 0; i < nums.size(); i++){
            if(candidate == nums[i]){
                count++;
            }else{
                count--;
            }
            
            if(count <=0){
                count=1;
                candidate=nums[i];
            }
        }
        return candidate;
        
    }