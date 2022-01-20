class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;
        loop(nums,0,res);
        
        return res;
        
    }
    
    void loop(vector<int>&nums,int start, vector<vector<int>>& res){
        if(start==nums.size()) {res.push_back(nums); return;}
        
        for(int i=start;i<nums.size();i++){
            swap(nums[i],nums[start]);
            loop(nums,start+1,res);
            swap(nums[i],nums[start]);
        }
        
    }
};