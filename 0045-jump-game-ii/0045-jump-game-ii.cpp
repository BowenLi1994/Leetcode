class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0,r=1;
        int res=0;
        int farthest=0;
        while (r<nums.size()){
            for(int i=l;i<r;i++){
                farthest=max(farthest,i+nums[i]);
            }
            l++;
            r=farthest+1;
            res++;
        }
        

        return res;
    }
};