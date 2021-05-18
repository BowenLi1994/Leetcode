class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> m;
        
        for(size_t i=0;i<nums.size();i++){
            if(!m.count(target-nums[i]))
                m[nums[i]]=i;
            else
                return {(int)i,m[target-nums[i]]};
        }
        
        return {};
        
        //1. randge based loop is quicker than for loop.
      
        
    }
};