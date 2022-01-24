class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        if(nums.size()==1)
            return;
        
        int n=nums.size();
        int left=0,right=n-1;
        
//         while(nums[left]==0)
//             left++;
//         while(nums[right]==2)
//             right--;
        
        
        int i=left;
        
        while(i<=right){
            if(nums[i]==0){
                swap(nums[i],nums[left++]);
            }
            else if(nums[i]==2){
                swap(nums[i],nums[right--]);
                i--;
                
            }
            i++;
        }
        
    }
};