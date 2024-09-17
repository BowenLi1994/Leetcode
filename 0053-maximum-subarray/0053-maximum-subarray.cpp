class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_G=nums[0];
        int max_Cur = nums[0];
        for(int i=1; i<nums.size(); i++){
            max_Cur = max(nums[i],nums[i]+max_Cur);
            max_G = max(max_G, max_Cur);
        }
        return max_G;
    }
};