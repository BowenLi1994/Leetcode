class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        
        for(int i=0;i<n;i++)
            if(nums[i]<0)
                nums[i]=0;
        
       for(int i=0;i<n;i++){
           
           int val=abs(nums[i]);
           if(val>=1&&val<=n){
               int index=val-1;
            if(nums[index]==0)
                nums[index]=-(n+1);
            else
                 nums[index]=-abs(nums[index]);
           }
           
         
              
       }
        
        // for(auto i : nums)
        //     cout<<i<<" ";
        // cout<<endl;
        
        for(int i=1;i<=n;i++){
            if(nums[i-1]>=0)
                return i;
        }
        
        
        return n+1;
    }
};