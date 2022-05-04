class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positiveC = 0;
        int negativeC = 1;
        vector<int> nums2(nums.size(), 0);
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                nums2[negativeC] = nums[i];
                negativeC+=2;
            }else{
                nums2[positiveC] = nums[i];
                positiveC+=2;
            }
        }
        return nums2;
    }
};