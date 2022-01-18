class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        // if(n<3)
        //     return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        
        for(int i=0;i<n-2;i++){
            if(nums[i]>0)   break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target=-nums[i];
            int left=i+1;
            int right=n-1;
            while(left<right){
                //cout<<"left: "<<left<<" right: "<<right<<endl;
                if(nums[left]+nums[right]==target){
                    res.push_back({nums[i],nums[left++],nums[right--]});
                    //cout<<"l: "<<left<<" r: "<<right<<endl;
                    while (left < right && nums[left]==nums[left-1]) left++;
                    while (left < right && nums[right]==nums[right+1]) right--;
                }
                else if(nums[left]+nums[right]<target)
                    left++;
                else
                    right--;

            }
        }
        
        
        return res;
        
    }
    
    
    
};