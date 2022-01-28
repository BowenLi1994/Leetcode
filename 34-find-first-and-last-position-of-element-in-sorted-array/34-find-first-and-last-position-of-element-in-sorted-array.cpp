class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        
        vector<int> res={-1,-1};
        
        if(nums.empty())
            return res;
        //left-range search
        int left=0, right=nums.size()-1;
        
        while(left<=right){
            int mid=(right-left)/2+left;
            if(nums[mid]<target)
                left=mid+1;
            else if(nums[mid]>target)
                right=mid-1;
            else if (nums[mid]==target)
                right=mid-1;
        }
        
        if(left==nums.size() || nums[left]!= target) return res;
        res[0]=left;
        
        
        right=nums.size()-1;
        while(left<=right){
            int mid=(right-left)/2+left;
            if(nums[mid]<target)
                left=mid+1;
            else if(nums[mid]>target)
                right=mid-1;
            else if (nums[mid]==target)
                left=mid+1;
        }
        res[1]=right;
        
        return res;
        
        
        
    }
};