class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int l=0, r=height.size()-1;
        int maxL=height[l],maxR=height[r];

        while(l<r){
            if(maxL<=maxR){
                int diff=maxL-height[l];
                if(diff>0){
                    res+=diff;
                }
                l++;
                maxL=max(maxL,height[l]);
            }
            else{
                int diff=maxR-height[r];
                if(diff>0){
                    res+=diff;
                }
                r--;
                maxR=max(maxR,height[r]);
            }
        }

        return res;
    }
};