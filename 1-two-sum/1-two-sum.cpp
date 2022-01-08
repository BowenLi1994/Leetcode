class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int index=0;
        unordered_map<int,int> m;
        for(auto i:nums){
            if(m.count(target-i))
                return {m[target-i],index};
            m[i]=index;
            index++;
        }
        
        
        
        return {};
        
    }
};