class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        vector<int> tmp=nums;
        sort(tmp.begin(),tmp.end());
        
        int n=nums.size(), r=n, mid=(n+1)/2;
        
        for(int i=0;i<n;i++){
            nums[i]=i&1?tmp[--r]:tmp[--mid];
            //cout<<nums[i]<<endl;
        }
        
     
        
        
    }
};