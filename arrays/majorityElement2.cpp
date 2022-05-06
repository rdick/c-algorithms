 vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        
        int count1 = 0;
        int count2 = 0;
        
        int can1 = -1;
        int can2 = -1;
        
        for(int n : nums){
            if(n == can1){
                count1++;
            } 
            else if(n == can2) {
                count2++;
            }
            else if(count1 == 0){
                can1 = n;
                count1 = 1;
            }
            else if(count2 == 0){   
                can2 = n;
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }
        
        int recount1 = 0;
        int recount2 = 0;
        
        for(int n : nums){
            if(can1 == n) {
                recount1++;
            }
            else if(can2 == n) {
                recount2++;
            }
        }

        if(recount1 > nums.size()/3){
            ans.push_back(can1);
        } 
        if(recount2 > nums.size()/3){
            ans.push_back(can2);
        }
        
        return ans;
   
    }