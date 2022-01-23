class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
        vector<bool> dp(n,false);
        dp[n-1]=true;
        
        for(int i=n-2;i>=0;i--){
            if(i+nums[i]>=n-1)
                dp[i]=true;
            for(int j=i;j<=i+nums[i];j++){
                if(dp[j]){
                    dp[i]=true;
                    break;
                }
            }  
        }
        
        
        return dp[0];
        
    }
};