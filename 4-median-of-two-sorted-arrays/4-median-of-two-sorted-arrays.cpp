class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int x=nums1.size();
        int y=nums2.size();
        
        if(x>y) return findMedianSortedArrays(nums2,nums1);
        
        
        int low=0;
        int high=x;
        
        while(low<=high){
            int xP=(low+high)/2;
            int yP=(x+y+1)/2-xP;
            
            int MaxlX=(xP==0)?INT_MIN:nums1[xP-1];
            int MaxlY=(yP==0)?INT_MIN:nums2[yP-1];
            int MinrX=(xP==x)?INT_MAX:nums1[xP];
            int MinrY=(yP==y)?INT_MAX:nums2[yP];
            
            if(MaxlX<=MinrY && MaxlY <= MinrX){
                if((x+y)%2==0)
                    return (max(MaxlX,MaxlY)+min(MinrX,MinrY))/2.0;
                else
                    return max(MaxlX,MaxlY);
            }
            else if(MaxlX > MinrY)
                high=xP-1;
            else
                low=xP+1;
        }
        
        return 0;
    }
};