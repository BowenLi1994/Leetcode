class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        bool counter=true;
        for(int i=1;i<nums.size();i++){
          if(nums[i]!=nums[k-1]){
            nums[k]=nums[i];
            k++;
            counter=true;
          }
          else if(counter){
            nums[k]=nums[i];
            k++;
            counter=false;
          }
        }

        return k;
        
    }
};