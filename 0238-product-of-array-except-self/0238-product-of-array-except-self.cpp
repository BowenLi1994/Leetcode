class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prePro(n,1), sufPro(n,1);
        for(int i=1;i<nums.size();i++){
            prePro[i]=nums[i-1]*prePro[i-1];
            //cout<<prePro[i]<<", ";
        }
        for(int i=nums.size()-2;i>=0;i--){
            sufPro[i]=nums[i+1]*sufPro[i+1];
            //cout<<sufPro[i]<<", ";
            prePro[i]*=sufPro[i];
        }
        return prePro;
    }
};