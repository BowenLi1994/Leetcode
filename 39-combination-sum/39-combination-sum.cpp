class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> v;
        dfs(candidates,target,0,v,res);
        
        return res;
    }
    
    void dfs(vector<int>& candidates,int target, int start, vector<int>& v,  vector<vector<int>>& res){
        if(target ==0){
            res.push_back(v);
            return;
        }
        if(target < 0)
            return;
        
        for(int i=start;i<candidates.size();i++){
            v.push_back(candidates[i]);
            dfs(candidates,target-candidates[i],i,v,res);
            v.pop_back();
        }

    }
};